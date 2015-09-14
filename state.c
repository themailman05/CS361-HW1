#ifndef state_c 
#define state_c 
#include <stdlib.h> 
#include "state.h" 

// Define all of the functions that are not exposed 
// by the header file. 
state*  
return_null() {
  return NULL; 
} 

void  
return_void() 
{ 
} 

// Define the pointers to the default event handler and default action
event_handler* default_event_handler = return_null; 
action* default_action = return_void; 

#endif
