#ifndef closed_h
#define closed_h 

#include "state.h" 

// Declare all of the functions performed when in the closed state.
static state* open_button_pressed(); 
static void entry_to(); 
static void exit_from(); 

// Define the closed state. 
state closed = {   
  default_event_handler,   // close_button_pressed  
  default_event_handler,   // closed_detected   
  open_button_pressed,     // open_button_pressed   
  default_event_handler,   // opened_detected   
  entry_to,                // entry   
  exit_from                // exit 
}; 
#endif 
