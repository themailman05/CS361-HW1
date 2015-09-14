#ifndef hardware_c
#define hardware_c

#include "hardware.h"

void
set_closed_indicator(led_setting value)
{
   printf("now setting closed indicator to: %s", value);
}

void 
set_opened_indicator(led_setting value)
{
   printf("now setting opened indicator to: %s", value);
}

void 
set_motor(motor_setting value)
{
   printf("now setting motor to: %s", value);
}

#endif
