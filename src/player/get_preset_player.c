/*
** EPITECH PROJECT, 2021
** B-MUL-200-LYN-2-1-myrpg-david.gozlan
** File description:
** get_preset_player
*/

#include "rpg.h"

player_data_t select_player_preset(head_t *head, pars_data_t *name)
{
    player_data_t player_data;

    if (my_strcmp("Shane", name->values.kstr) == 0)
        player_data = SHANE_PRESET;
    if (my_strcmp("Sebastian", name->values.kstr) == 0)
        player_data = SEBASTIAN_PRESET;
    if (my_strcmp("Arsenio", name->values.kstr) == 0)
        player_data = ARSENIO_PRESET;
    if (my_strcmp("Maru", name->values.kstr) == 0)
        player_data = MARU_PRESET;
    return (player_data);
}

player_data_t get_preset_player(head_t *head)
{
    char *path_save;
    pars_obj_t *obj;
    pars_data_t *name;
    player_data_t player_data;

    if (head->technical->index_save == 1)
        path_save = "saves/save_1.json";
    if (head->technical->index_save == 2)
        path_save = "saves/save_2.json";
    if (head->technical->index_save == 3)
        path_save = "saves/save_3.json";
    obj = parser_json(path_save);
    name = json_search(obj->data, "character");
    player_data = select_player_preset(head, name);
    pars_obj_destroy(obj);
    return (player_data);
}