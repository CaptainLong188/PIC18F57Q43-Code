#include "GPIO_driver.h"

void set_pin_input(PortName_t port_name, uint8_t pin_number)
{
    switch(port_name)
    {
        case PORT_A:
            TRISA |= (1 << pin_number);
            break;
        case PORT_B:
            TRISB |= (1 << pin_number);
            break;
        case PORT_C:
            TRISC |= (1 << pin_number);
            break;
        case PORT_D:
            TRISD |= (1 << pin_number);
            break;
        case PORT_E:
            TRISE |= (1 << pin_number);
            break;
        case PORT_F:
            TRISF |= (1 << pin_number);
            break;
        default:
            break;
    }
        
}

void set_pin_output(PortName_t port_name, uint8_t pin_number)
{
    switch(port_name)
    {
        case PORT_A:
            TRISA &= ~(1 << pin_number);
            break;
        case PORT_B:
            TRISB &= ~(1 << pin_number);
            break;
        case PORT_C:
            TRISC &= ~(1 << pin_number);
            break;
        case PORT_D:
            TRISD &= ~(1 << pin_number);
            break;
        case PORT_E:
            TRISE &= ~(1 << pin_number);
            break;
        case PORT_F:
            TRISF &= ~(1 << pin_number);
            break;
        default:
            break;
    }   
}
void set_pin_digital_mode(PortName_t port_name, uint8_t pin_number)
{
    switch(port_name)
    {
        case PORT_A:
            ANSELA &= ~(1 << pin_number);
            break;
        case PORT_B:
            ANSELB &= ~(1 << pin_number);
            break;
        case PORT_C:
            ANSELC &= ~(1 << pin_number);
            break;
        case PORT_D:
            ANSELD &= ~(1 << pin_number);
            break;
        case PORT_E:
            ANSELE &= ~(1 << pin_number);
            break;
        case PORT_F:
            ANSELF &= ~(1 << pin_number);
            break;
        default:
            break;
    }       
}
void set_pin_analog_mode(PortName_t port_name, uint8_t pin_number)
{
    switch(port_name)
    {
        case PORT_A:
            ANSELA |= (1 << pin_number);
            break;
        case PORT_B:
            ANSELB |= (1 << pin_number);
            break;
        case PORT_C:
            ANSELC |= (1 << pin_number);
            break;
        case PORT_D:
            ANSELD |= (1 << pin_number);
            break;
        case PORT_E:
            ANSELE |= (1 << pin_number);
            break;
        case PORT_F:
            ANSELF |= (1 << pin_number);
            break;
        default:
            break;
    }    
}

void set_pin_pullup(PortName_t port_name, uint8_t pin_number)
{
    switch(port_name)
    {
        case PORT_A:
            WPUA |= (1 << pin_number);
            break;
        case PORT_B:
            WPUB |= (1 << pin_number);
            break;
        case PORT_C:
            WPUC |= (1 << pin_number);
            break;
        case PORT_D:
            WPUD |= (1 << pin_number);
            break;
        case PORT_E:
            WPUE |= (1 << pin_number);
            break;
        case PORT_F:
            WPUF |= (1 << pin_number);
            break;
        default:
            break;
    }    
}

void reset_pin_pullup(PortName_t port_name, uint8_t pin_number)
{
    switch(port_name)
    {
        case PORT_A:
            WPUA &= ~(1 << pin_number);
            break;
        case PORT_B:
            WPUB &= ~(1 << pin_number);
            break;
        case PORT_C:
            WPUC &= ~(1 << pin_number);
            break;
        case PORT_D:
            WPUD &= ~(1 << pin_number);
            break;
        case PORT_E:
            WPUE &= ~(1 << pin_number);
            break;
        case PORT_F:
            WPUF &= ~(1 << pin_number);
            break;
        default:
            break;
    }   
}

void set_pin_st(PortName_t port_name, uint8_t pin_number)
{
    switch(port_name)
    {
        case PORT_A:
            INLVLA |= (1 << pin_number);
            break;
        case PORT_B:
            INLVLB |= (1 << pin_number);
            break;
        case PORT_C:
            INLVLC |= (1 << pin_number);
            break;
        case PORT_D:
            INLVLD |= (1 << pin_number);
            break;
        case PORT_E:
            INLVLE |= (1 << pin_number);
            break;
        case PORT_F:
            INLVLF |= (1 << pin_number);
            break;
        default:
            break;
    }           
}

void set_pin_ttl(PortName_t port_name, uint8_t pin_number)
{
    switch(port_name)
    {
        case PORT_A:
            INLVLA &= ~(1 << pin_number);
            break;
        case PORT_B:
            INLVLB &= ~(1 << pin_number);
            break;
        case PORT_C:
            INLVLC &= ~(1 << pin_number);
            break;
        case PORT_D:
            INLVLD &= ~(1 << pin_number);
            break;
        case PORT_E:
            INLVLE &= ~(1 << pin_number);
            break;
        case PORT_F:
            INLVLF &= ~(1 << pin_number);
            break;
        default:
            break;
    }  
}
void set_pin_sr_limited(PortName_t port_name, uint8_t pin_number)
{
    switch(port_name)
    {
        case PORT_A:
            SLRCONA |= (1 << pin_number);
            break;
        case PORT_B:
            SLRCONB |= (1 << pin_number);
            break;
        case PORT_C:
            SLRCONC |= (1 << pin_number);
            break;
        case PORT_D:
            SLRCOND |= (1 << pin_number);
            break;
        case PORT_E:
            SLRCONE |= (1 << pin_number);
            break;
        case PORT_F:
            SLRCONF |= (1 << pin_number);
            break;
        default:
            break;
    }   
}

void set_pin_sr_maximum(PortName_t port_name, uint8_t pin_number)
{
   switch(port_name)
    {
        case PORT_A:
            SLRCONA &= ~(1 << pin_number);
            break;
        case PORT_B:
            SLRCONB &= ~(1 << pin_number);
            break;
        case PORT_C:
            SLRCONC &= ~(1 << pin_number);
            break;
        case PORT_D:
            SLRCOND &= ~(1 << pin_number);
            break;
        case PORT_E:
            SLRCONE &= ~(1 << pin_number);
            break;
        case PORT_F:
            SLRCONF &= ~(1 << pin_number);
            break;
        default:
            break;
    }    
}

void set_pin_push_pull(PortName_t port_name, uint8_t pin_number)
{
    switch(port_name)
    {
        case PORT_A:
            ODCONA &= ~(1 << pin_number);
            break;
        case PORT_B:
            ODCONB &= ~(1 << pin_number);
            break;
        case PORT_C:
            ODCONC &= ~(1 << pin_number);
            break;
        case PORT_D:
            ODCOND &= ~(1 << pin_number);
            break;
        case PORT_E:
            ODCONE &= ~(1 << pin_number);
            break;
        case PORT_F:
            ODCONF &= ~(1 << pin_number);
            break;
        default:
            break;
    }    
}

void set_pin_open_drain(PortName_t port_name, uint8_t pin_number)
{
    switch(port_name)
    {
        case PORT_A:
            ODCONA |= (1 << pin_number);
            break;
        case PORT_B:
            ODCONB |= (1 << pin_number);
            break;
        case PORT_C:
            ODCONC |= (1 << pin_number);
            break;
        case PORT_D:
            ODCOND |= (1 << pin_number);
            break;
        case PORT_E:
            ODCONE |= (1 << pin_number);
            break;
        case PORT_F:
            ODCONF |= (1 << pin_number);
            break;
        default:
            break;
    }   
}

void configure_pin(PortName_t port_name, uint8_t pin_number, bool is_input, 
                   bool is_digital, bool enable_pullup, bool use_ttl, bool slew_rate_limited,
                   bool use_push_pull)
{
    if(is_input)
        set_pin_input(port_name, pin_number);
    else
        set_pin_output(port_name, pin_number);
    
    if(is_digital)
        set_pin_digital_mode(port_name, pin_number);
    else
        set_pin_analog_mode(port_name, pin_number);
    
    if(enable_pullup)
        set_pin_pullup(port_name, pin_number);
    else
        reset_pin_pullup(port_name, pin_number);
    
    if(use_ttl)
        set_pin_ttl(port_name, pin_number);
    else
        set_pin_st(port_name, pin_number);
    
    if(slew_rate_limited)
        set_pin_sr_limited(port_name, pin_number);
    else
        set_pin_sr_maximum(port_name, pin_number);
    
    if(use_push_pull)
        set_pin_push_pull(port_name, pin_number);
    else
        set_pin_open_drain(port_name, pin_number);
    
}

void set_pin_high(PortName_t port_name, uint8_t pin_number)
{
    switch(port_name)
    {
        case PORT_A:
            LATA |= (1 << pin_number);
            break;
        case PORT_B:
            LATB |= (1 << pin_number);
            break;
        case PORT_C:
            LATC |= (1 << pin_number);
            break;
        case PORT_D:
            LATD |= (1 << pin_number);
            break;
        case PORT_E:
            LATE |= (1 << pin_number);
            break;
        case PORT_F:
            LATF |= (1 << pin_number);
            break;
        default:
            break;
    }
}

void set_pin_low(PortName_t port_name, uint8_t pin_number)
{
    switch(port_name)
    {
        case PORT_A:
            LATA &= ~(1 << pin_number);
            break;
        case PORT_B:
            LATB &= ~(1 << pin_number);
            break;
        case PORT_C:
            LATC &= ~(1 << pin_number);
            break;
        case PORT_D:
            LATD &= ~(1 << pin_number);
            break;
        case PORT_E:
            LATE &= ~(1 << pin_number);
            break;
        case PORT_F:
            LATF &= ~(1 << pin_number);
            break;
        default:
            break;
    }
}

void toggle_pin(PortName_t port_name, uint8_t pin_number)
{
    switch(port_name)
    {
        case PORT_A:
            LATA ^= (1 << pin_number);
            break;
        case PORT_B:
            LATB ^= (1 << pin_number);
            break;
        case PORT_C:
            LATC ^= (1 << pin_number);
            break;
        case PORT_D:
            LATD ^= (1 << pin_number);
            break;
        case PORT_E:
            LATE ^= (1 << pin_number);
            break;
        case PORT_F:
            LATF ^= (1 << pin_number);
            break;
        default:
            break;
    }    
}

bool get_pin_value(PortName_t port_name, uint8_t pin_number)
{
    switch(port_name)
    {
        case PORT_A:
            return PORTA & (1 << pin_number);
        case PORT_B:
            return PORTB & (1 << pin_number);
        case PORT_C:
            return PORTC & (1 << pin_number);
        case PORT_D:
            return PORTD & (1 << pin_number);
        case PORT_E:
            return PORTE & (1 << pin_number);
        case PORT_F:
            return PORTF & (1 << pin_number);
        default:
            break;
    }   
}