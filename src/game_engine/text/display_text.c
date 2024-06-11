#include "rpg.h"

void display_text(head_t *head, text_t *first)
{
    while (first != NULL) {
        sfRenderWindow_drawText(head->window, first->text, NULL);
        first = first->next;
    }
}