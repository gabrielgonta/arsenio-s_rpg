#include "rpg.h"

void update_text_scrolling(text_scrolling_t *text, char *new_str)
{
    if (text->speed == 1)
        sfText_setString(text->text, new_str);
    return;
}