#ifndef opened_c 
#define opened_c 

#include "opened.h" 
#include "hardware.h" 
#include "statemodel.h" 

state_t opened = {
   close_button_pressed,    // close_button_pressed
   default_event_handler,   // closed_detected
   default_event_handler,   // open_button_pressed
   default_event_handler,   // opened_detected
   entry_to,                // entry
   exit_from                // exit 
}; 



state_t*  close_button_pressed() 
{
   exit_from();
   return &closing;
} 

void  
entry_to() 
{
   set_opened_indicator(LED_ON); 
} 

void  
exit_from() 
{
   set_opened_indicator(LED_OFF); 
} 

#endif 
