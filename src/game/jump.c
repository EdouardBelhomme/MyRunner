/*
** EPITECH PROJECT, 2022
** B-MUL-100-BDX-1-1-myrunner-edouard.belhomme
** File description:
** jump
*/

#include "my.h"

void jump(game_t *window)
{
    if (sfKeyboard_isKeyPressed(sfKeySpace) && window->pos_buzz.y == 875)
        window->gravity = -15;
    window->pos_buzz.y = window->pos_buzz.y + window->gravity;
    if (window->pos_buzz.y > 875) {
        window->gravity = 0;
        window->pos_buzz.y = 875;
    }
}
