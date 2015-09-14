#ifndef closing_h 
#define closing_h 
#include "state.h" 

// Declare all of the functions performed when in the closing state. 
static state* closed_detected(); 
static state* open_button_pressed(); 
static void entry_to(); 

// Define the closing state. 

state closing = {   
   default_event_handler,   // close_button_pressed
   closed_detected,         // closed_detected
   open_button_pressed,     // open_button_pressed
   default_event_handler,   // opened_detected
   entry_to,                // entry
   default_action           // exit 
}; 
#endif 
