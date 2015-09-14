
#ifndef closing_c 
#define closing_c 
#include "closing.h" 
#include "hardware.h"
#include "statemodel.h" 

state*  
closed_detected() 
{
   set_motor(MOTOR_OFF);
   return &closed; 
}

state*  
open_button_pressed() 
{
   return &opening; 
} 

void  
entry_to() 
{
   set_motor(MOTOR_CLOSING); 
} 
#endif 
