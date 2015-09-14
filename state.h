#ifndef state_h 
#define state_h 

// Add an alias for a type to the global name space. 
typedef struct state    state;  

// Add an alias for event handlers. 
typedef      state*         event_handler(void);   

// Add an alias for actions. 
typedef      void        action(void); 

// Define the identifier state as a struct. 
struct state {   
event_handler*  close_button_pressed;   
event_handler*  closed_detected;   
event_handler*  open_button_pressed;   
event_handler*  opened_detected;   
action*         entry_to;   
action*         exit_from; 
}; // Declare the default event handler and default action. 

extern event_handler* default_event_handler; 
extern action* default_action; 

#endif 
