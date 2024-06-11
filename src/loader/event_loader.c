#include "rpg.h"

event_t *event_initialize(void)
{
    event_t *event = malloc(sizeof(event_t));

    event->key_input = 0;
    event->mouse_coords = (sfVector2f){0, 0};
    return (event);
}