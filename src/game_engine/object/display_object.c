#include "rpg.h"

void display_object(head_t *head, object_t *first)
{
    while (first != NULL) {
        sfRenderWindow_drawSprite(head->window, first->sprite, NULL);
        first = first->next;
    }
}