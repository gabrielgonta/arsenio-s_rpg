/*
** EPITECH PROJECT, 2021
** my_rpg
** File description:
** function_button_in_game
*/

#include "rpg.h"

void quit_select_player(head_t *head, button_t *button)
{
    start_fade_animation(head, NULL, STATE_LOAD_SAVE_MENU);
}

void launch_game(head_t *head, button_t *button)
{
    pars_data_t *obj;

    if (button == head->scenes->select_player->Shane_button) {
        obj = init_player_data_json("Shane");
        writer_json(get_path_save(head), NULL, obj);
    }
    if (button == head->scenes->select_player->Sebastian_button) {
        obj = init_player_data_json("Sebastian");
        writer_json(get_path_save(head), NULL, obj);
    }
    if (button == head->scenes->select_player->arsenio_button) {
        obj = init_player_data_json("Arsenio");
        writer_json(get_path_save(head), NULL, obj);
    }
    if (button == head->scenes->select_player->maru_button) {
        obj = init_player_data_json("Maru");
        writer_json(get_path_save(head), NULL, obj);
    }
    start_fade_animation(head, NULL, STATE_INGAME);
}