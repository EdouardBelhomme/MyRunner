/*
** EPITECH PROJECT, 2022
** B-MUL-100-BDX-1-1-myrunner-edouard.belhomme
** File description:
** lose
*/

#include "my.h"

bool lose(game_t *window)
{
    if (window->pos_buzz.x + 53 > window->pos_woody.x + 57 && \
    window->pos_buzz.x < window->pos_woody.x + 57 && \
    window->pos_buzz.y + 100 > window->pos_woody.y + 100 && \
    window->pos_buzz.y < window->pos_woody.y + 100)
        return true;
    return false;
}
