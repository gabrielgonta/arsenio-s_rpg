#include "rpg.h"

void display_conversation(head_t *head, player_t *player)
{
    if (player->is_in_conversation == 1) {
        sfRenderWindow_drawSprite(head->window,
        head->scenes->in_game->bubble->sprite, NULL);
        sfRenderWindow_drawSprite(head->window,
        head->scenes->in_game->face->sprite, NULL);
    }
}