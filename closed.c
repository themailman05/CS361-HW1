#ifndef closed_c 
#define closed_c 

#include "closed.h" 
#include "hardware.h"
#include "hardware.c" 
#include "statemodel.h"

state*  open_button_pressed() 
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
