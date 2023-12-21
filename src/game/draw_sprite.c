/*
** EPITECH PROJECT, 2022
** B-MUL-100-BDX-1-1-myrunner-edouard.belhomme
** File description:
** draw_sprite
*/

#include "my.h"

void check_size(game_t *window)
{
    if (window->size_buzz.left >= 1060) {
        window->size_buzz.left = 0;
    }
    if (window->size_woody.left >= 1841) {
        window->size_woody.left = 0;
    }
}

void draw_sprite(game_t *window, sfClock *game_clock, sfTime time)
{
    double seconds = time.microseconds;

    check_size(window);
    if (seconds >= 1000) {
        window->size_buzz.left += 53;
        window->size_woody.left += 80;
        sfClock_restart(game_clock);
        check_size(window);
    }
    check_size(window);
    sfSprite_setTextureRect(window->sprite_buzz, window->size_buzz);
    sfSprite_setTextureRect(window->sprite_woody, window->size_woody);
    sfRenderWindow_drawSprite(window->window, window->sprite_background, NULL);
    sfRenderWindow_drawSprite(window->window, \
    window->sprite_background_2, NULL);
    sfRenderWindow_drawSprite(window->window, window->sprite_plinth, NULL);
    sfRenderWindow_drawSprite(window->window, window->sprite_ground, NULL);
    sfRenderWindow_drawSprite(window->window, window->sprite_ground_2, NULL);
    sfRenderWindow_drawSprite(window->window, window->sprite_ground_3, NULL);
    sfRenderWindow_drawSprite(window->window, window->sprite_woody, NULL);
    sfRenderWindow_drawSprite(window->window, window->sprite_buzz, NULL);
}
