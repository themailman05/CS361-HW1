#ifndef opening_c 
#define opening_c 
#include "opening.h" 
#include "hardware.h" 
#include "statemodel.h” 

state*  close_button_pressed() 
{
   return &closing; 
} 
state*  opened_detected() 
{
   set_motor(MOTOR_OFF);
   return &opened; 
} 

void  
entry_to() 
{
   set_motor(MOTOR_OPENING); 
} 

#endif
