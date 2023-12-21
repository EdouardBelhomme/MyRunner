/*
** EPITECH PROJECT, 2022
** B-MUL-100-BDX-1-1-myrunner-edouard.belhomme
** File description:
** movements
*/

#include "my.h"

void movements(game_t *window)
{
    sfSprite_setPosition(window->sprite_buzz, window->pos_buzz);
    sfSprite_setPosition(window->sprite_ground, window->pos_ground);
    sfSprite_setPosition(window->sprite_ground_2, window->pos_ground_2);
    sfSprite_setPosition(window->sprite_ground_3, window->pos_ground_3);
    sfSprite_setPosition(window->sprite_plinth, window->pos_plinth);
    sfSprite_setPosition(window->sprite_background, window->pos_background);
    sfSprite_setPosition(window->sprite_background_2, window->pos_background_2);
    window->pos_background.x = (window->move * 0.2) + 5;
    window->pos_background_2.x = (window->move * 0.2) + 5 + 1920;
    window->pos_ground.x = (window->move * 0.5) + 5;
    window->pos_ground_2.x = (window->move * 0.5) + 5 + 1920;
    window->pos_ground_3.x = (window->move * 0.5) + 5 + 3840;
    window->move -= 10;
    if (window->move < -1920) {
        window->pos_ground_2.x = (window->move * 0.5) + 5 + 5760;
        window->pos_ground_3.x = (window->move * 0.5) + 5 + 7680;
    }
    if (window->move < -1920)
        window->move = 0;
}

void woody_movements(game_t *window)
{
    sfSprite_setPosition(window->sprite_woody, window->pos_woody);
    window->pos_woody.x = (window->pos_woody.x - 10);
}

void check_woody_left(game_t *window)
{
    if (window->pos_woody.x < 0) {
        window->pos_woody.x = 1920;
        window->score += 1;
    }
}

void all_movements(game_t *window)
{
    movements(window);
    woody_movements(window);
    check_woody_left(window);
}
