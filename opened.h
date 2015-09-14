#ifndef opened_h 
#define opened_h 
#include "state.h" 

// Declare all of the functions performed when in the opened state. 

static state* close_button_pressed(); 
static void entry_to(); 
static void exit_from(); 

// Define the opened state. 
state opened = {
   close_button_pressed,    // close_button_pressed
   default_event_handler,   // closed_detected
   default_event_handler,   // open_button_pressed
   default_event_handler,   // opened_detected
   entry_to,                // entry
   exit_from                // exit 
}; 

#endif 
