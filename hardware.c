#ifndef hardware_c
#define hardware_c

#include "hardware.h"
#include <string.h>
#include <stdio.h>

void
set_closed_indicator(led_setting value)
{
   printf("now setting closed indicator");
   handle_event(value);
}

void 
set_opened_indicator(led_setting value)
{
   printf("now setting opened indicator");
   handle_event(value);
}

void 
set_motor(motor_setting value)
{
   printf("now setting motor");
   handle_event(value);
}

#endif
