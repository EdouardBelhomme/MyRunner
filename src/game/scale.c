/*
** EPITECH PROJECT, 2022
** B-MUL-100-BDX-1-1-myrunner-edouard->belhomme
** File description:
** scale
*/

#include "my.h"

void scale(game_t *window)
{
    window->scale_buzz.x = 2.6;
    window->scale_buzz.y = 2.6;
    window->scale_woody.y = 2.6;
    window->scale_woody.x = 2.6;
    sfSprite_setScale(window->sprite_buzz, window->scale_buzz);
    sfSprite_setScale(window->sprite_woody, window->scale_woody);
}
