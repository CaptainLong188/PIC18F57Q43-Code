#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <xc.h>
#include <stdint.h>
#include "UART.h"
#include "config.h"
#include "GPIO_driver.h"

/*Function Prototypes*/
void GPIO_Init();
void IOC_Init(void);
void INTERRUPT_Init(void);
void example1();
void example2();
void example3();

int main(){
    
    GPIO_Init();
    CLK_Init();
    IOC_Init();
    INTERRUPT_Init();
    UART1_Init(9600);
 
    while(1)
    {

    }
    
    return (EXIT_SUCCESS);
}

void GPIO_Init() 
{    
    /*LED Configuration*/
    configure_pin(PORT_F, 3, OUTPUT, DIGITAL, NOPULLUP, TTL, SR_LIMITED, PUSHPULL);
    set_pin_high(PORT_F, 3);
    
    /*Button Configuration*/
    configure_pin(PORT_B, 4, INPUT, DIGITAL, PULLUP, TTL, SR_LIMITED, PUSHPULL);

    /*RA1 Configuration*/ 
    configure_pin(PORT_A, 1, OUTPUT, DIGITAL, NOPULLUP, TTL, SR_LIMITED, PUSHPULL);
}

void example1()
{
    set_pin_low(PORT_F, 3);  /*Turn on LED*/
    __delay_ms(2000);
    set_pin_high(PORT_F, 3); /*Turn off LED*/
    __delay_ms(2000);    
}

void example2()
{
    if(!get_pin_value(PORT_B, 4)) /*Read button value*/
    {
        set_pin_low(PORT_F, 3);   /*Turn on LED*/
    }
    else
    {
        set_pin_high(PORT_F, 3);  /*Turn off LED*/
    }
}

void example3()
{
    toggle_pin(PORT_A, 1);
    __delay_ms(1000);
}

/*Using GPIO Interrupts*/
void IOC_Init(void)
{
    IOCBFbits.IOCBF4 = 0; /*Clear flag*/
    IOCBPbits.IOCBP4 = 1; /*Positive-going edge*/
    PIE0bits.IOCIE   = 1; /*Enable IOC interrupt*/
}

void INTERRUPT_Init(void)
{
    INTCON0bits.GIE = 1; /*Enable global interrupts*/
}

void __interrupt(irq(IRQ_IOC)) IOC_ISR(void)
{
    __delay_ms(30);             /*Just for educational purposes*/
    if(IOCBFbits.IOCBF4)        /*Check the interrupt flag*/
    {
        IOCBFbits.IOCBF4 = 0;   /*Clear flag*/
        UART1_Write_String("Interrupt activated\r\n");
        toggle_pin(PORT_F, 3);  /*Toggle LED*/
    }
}