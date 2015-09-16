#ifndef opening_c
#define opening_c

#include "opening.h"
#include "hardware.h" 
#include "statemodel.h" 


// Define the opening state. 
state_t opening = {
   close_button_pressed,    // close_button_pressed
   default_event_handler,   // closed_detected
   default_event_handler,   // open_button_pressed
   opened_detected,         // opened_detected
   entry_to,                // entry
   default_action           // exit 
};

state_t*  close_button_pressed() 
{
   return &closing; 
} 
state_t*  opened_detected() 
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
