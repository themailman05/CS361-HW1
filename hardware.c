#ifndef hardware_c
#define hardware_c

#include "hardware.h"
#include <string.h>
#include <stdio.h>

void
set_closed_indicator(led_setting value)
{
   switch (value){
     case LED_OFF:
       printf("now setting closed indicator to OFF\n");
       break;
     case LED_ON:
       printf("now setting closed indicator to ON\n");
       break;
   }
}

void
set_opened_indicator(led_setting value)
{

   switch (value){
     case LED_OFF:
       printf("now setting opened indicator to OFF\n");
       break;
     case LED_ON:
       printf("now setting opened indicator to ON\n");
       break;
   }
}

void
set_motor(motor_setting value)
{
   switch (value){
     case MOTOR_CLOSING:
       printf("motor now closing...\n");
       break;
     case MOTOR_OPENING:
       printf("motor now opening...\n");
       break;
     case MOTOR_OFF:
       printf("motor off.\n");
       break;
   }
}

#endif
