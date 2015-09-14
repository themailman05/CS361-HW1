#ifndef main_c 
#define main_c 

#include <stdio.h>
#include "statemodel.c"
#include "hardware.h"

void main() {
    
    //take user input
    while(1){
      char input_button;
      input_button = getchar();
      
      switch(input_button) //read input and dispatch event
      {
        case 'c':
          handle_event(CLOSE_BUTTON_PRESSED);
        case 'C':
          handle_event(CLOSED_DETECTED);
        case 'o':
          handle_event(OPEN_BUTTON_PRESSED);
        case 'O':
          handle_event(OPENED_DETECTED);
        case 'x':
          exit(0);
      }
    }
}
#endif

