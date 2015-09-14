#ifndef statemode_h 
#define statemodel_h 
#include <stdlib.h> 
#include "hardware.h" 
#include "state.h" 

// Declare all of the states used in the state model. 

extern state closed; 
extern state closing; 
extern state opened; 
extern state opening; 

// Declare all of the functions. 
void 
handle_event(event current_event); 


#endif 
