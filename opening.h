#ifndef opening_h 
#define opening_h 
#include "state.h" 
// Declare all of the functions performed when in the opening state. 
static state* close_button_pressed(); 
static state* opened_detected(); 
static void entry_to(); 

// Define the opening state. 
state opening = {
   close_button_pressed,    // close_button_pressed
   default_event_handler,   // closed_detected
   default_event_handler,   // open_button_pressed
   opened_detected,         // opened_detected
   entry_to,                // entry
   default_action           // exit 
}; 
#endif 

