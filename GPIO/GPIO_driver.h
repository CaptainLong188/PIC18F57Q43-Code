#ifndef GPIO_DRIVER_H
#define	GPIO_DRIVER_H

#include <xc.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdbool.h>

#define INPUT   1
#define OUTPUT  0

#define DIGITAL 1
#define ANALOG  0

#define PULLUP      1
#define NOPULLUP    0

#define TTL 1
#define ST  0

#define SR_LIMITED  1
#define SR_MAXIMUM  0

#define PUSHPULL    1
#define OPENDRAIN   0

typedef enum {
    PORT_A,
    PORT_B,
    PORT_C,
    PORT_D,
    PORT_E,
    PORT_F
}PortName_t;

void set_pin_input(PortName_t port_name, uint8_t pin_number);
void set_pin_output(PortName_t port_name, uint8_t pin_number);
void set_pin_digital_mode(PortName_t port_name, uint8_t pin_number);
void set_pin_analog_mode(PortName_t port_name, uint8_t pin_number);
void set_pin_pullup(PortName_t port_name, uint8_t pin_number);
void reset_pin_pullup(PortName_t port_name, uint8_t pin_number);
void set_pin_st(PortName_t port_name, uint8_t pin_number);
void set_pin_ttl(PortName_t port_name, uint8_t pin_number);
void set_pin_sr_limited(PortName_t port_name, uint8_t pin_number);
void set_pin_sr_maximum(PortName_t port_name, uint8_t pin_number);
void set_pin_push_pull(PortName_t port_name, uint8_t pin_number);
void set_pin_open_drain(PortName_t port_name, uint8_t pin_number);
void configure_pin(PortName_t port_name, uint8_t pin_number, bool is_input, 
                   bool is_digital, bool enable_pullup, bool use_ttl, bool slew_rate_limited,
                   bool use_push_pull);
void set_pin_high(PortName_t port_name, uint8_t pin_number);
void set_pin_low(PortName_t port_name, uint8_t pin_number);
void toggle_pin(PortName_t port_name, uint8_t pin_number);
bool get_pin_value(PortName_t port_name, uint8_t pin_number);

#endif	/* GPIO_DRIVER_H */