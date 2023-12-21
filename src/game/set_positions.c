/*
** EPITECH PROJECT, 2022
** B-MUL-100-BDX-1-1-myrunner-edouard->belhomme
** File description:
** set_positions
*/

#include "my.h"

void set_positions(game_t *window)
{
    window->move = 0;
    window->gravity = 0;
    window->pos_ground.y = 876;
    window->pos_ground_2.y = 876;
    window->pos_ground_3.y = 876;
    window->pos_plinth.y = 702;
    window->pos_buzz.y = 875;
    window->pos_buzz.x = 600;
    window->pos_woody.y = 825;
    window->pos_woody.x = 1920;
}
