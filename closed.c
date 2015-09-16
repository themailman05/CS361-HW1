#ifndef closed_c 
#define closed_c 

#include "closed.h" 
#include "hardware.h" 
#include "statemodel.h"


// Define the closed state. 
state_t closed = {   
  default_event_handler,   // close_button_pressed  
  default_event_handler,   // closed_detected   
  open_button_pressed,     // open_button_pressed   
  default_event_handler,   // opened_detected   
  entry_to,                // entry   
  exit_from                // exit 
}; 

state_t*  open_button_pressed() 
{   
   exit_from();   
   return &opening; 
} 

void  
entry_to() 
{   
  set_closed_indicator(LED_ON); 
} 

void  
exit_from() 
{   
  set_closed_indicator(LED_OFF); 
} 
#endif 
