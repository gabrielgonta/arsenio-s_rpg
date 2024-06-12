/*
** EPITECH PROJECT, 2021
** B-MUL-200-LYN-2-1-myrpg-david.gozlan
** File description:
** init_select_player_2
*/

#include "rpg.h"

void create_button_face(head_t *head, select_player_t *menu)
{
    create_button(head, SHANE_BUTTON, &menu->button);
    menu->shane_button = get_last_button(menu->button);
    sfSprite_setTextureRect(menu->shane_button->sprite, SHANE_FACE_RECT);
    create_button(head, SEBASTIAN_BUTTON, &menu->button);
    menu->sebastian_button = get_last_button(menu->button);
    sfSprite_setTextureRect(menu->sebastian_button->sprite, SEBASTIAN_FACE_RECT);
    create_button(head, ARSENIO_BUTTON, &menu->button);
    menu->arsenio_button = get_last_button(menu->button);
    sfSprite_setTextureRect(menu->arsenio_button->sprite, ARSENIO_FACE_RECT);
    create_button(head, MARU_BUTTON, &menu->button);
    menu->maru_button = get_last_button(menu->button);
    sfSprite_setTextureRect(menu->maru_button->sprite, MARU_FACE_RECT);
}

void create_object_appearance(head_t *head, select_player_t *menu)
{
    object_t *object;

    create_object(SHANE_APPEARANCE, &menu->object);
    object = get_last_object(menu->object);
    sfSprite_setTextureRect(object->sprite, SHANE_APPEARANCE_RECT);
    create_object(SEBASTIAN_APPEARANCE, &menu->object);
    object = get_last_object(menu->object);
    sfSprite_setTextureRect(object->sprite, SEBASTIAN_APPEARANCE_RECT);
    create_object(ARSENIO_APPEARANCE, &menu->object);
    object = get_last_object(menu->object);
    sfSprite_setTextureRect(object->sprite, ARSENIO_APPEARANCE_RECT);
    create_object(MARU_APPEARANCE, &menu->object);
    object = get_last_object(menu->object);
    sfSprite_setTextureRect(object->sprite, MARU_APPEARANCE_RECT);
}

void create_object_name(head_t *head, select_player_t *menu)
{
    object_t *object;

    create_object(SHANE_NAME, &menu->object);
    object = get_last_object(menu->object);
    sfSprite_setTextureRect(object->sprite, SHANE_NAME_RECT);
    create_object(SEBASTIAN_NAME, &menu->object);
    object = get_last_object(menu->object);
    sfSprite_setTextureRect(object->sprite, SEBASTIAN_NAME_RECT);
    create_object(ARSENIO_NAME, &menu->object);
    object = get_last_object(menu->object);
    sfSprite_setTextureRect(object->sprite, ARSENIO_NAME_RECT);
    create_object(MARU_NAME, &menu->object);
    object = get_last_object(menu->object);
    sfSprite_setTextureRect(object->sprite, MARU_NAME_RECT);
}