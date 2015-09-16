#ifndef closing_c 
#define closing_c 

#include "closing.h" 
#include "hardware.h"
#include "statemodel.h" 

state_t closing = {   
   default_event_handler,   // close_button_pressed
   closed_detected,         // closed_detected
   open_button_pressed,     // open_button_pressed
   default_event_handler,   // opened_detected
   entry_to,                // entry
   default_action           // exit 
}; 

state_t*  
closed_detected() 
{
   set_motor(MOTOR_OFF);
   return &closed; 
}

state_t*  
open_button_pressed() 
{
   return &opening; 
} 

void entry_to() 
{
   set_motor( MOTOR_CLOSING ); 
} 

#endif 
