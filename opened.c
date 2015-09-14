##ifndef opened_c 
#define opened_c 
#include "opened.h" 
#include "hardware.h" 
#include "statemodel.h" 

state*  close_button_pressed() 
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
