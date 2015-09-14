#include <stdio.h>

typedef struct state   state_t ;

typedef state_t* event_handler(void);

typedef void action(void);

struct state {
    event_handler* close_button_pressed;
    event_handler* closed_detected;
    event_handler* open_button_pressed;
    event_handler* opened_detected;
    action*        entry_to;
    action*        exit_from;

};
