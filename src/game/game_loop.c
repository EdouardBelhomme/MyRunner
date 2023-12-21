/*
** EPITECH PROJECT, 2022
** B-MUL-100-BDX-1-1-myrunner-edouard.belhomme
** File description:
** game_loop
*/

#include "my.h"

void game_loop(void)
{
    game_t *window = fill_sprites();
    sfVideoMode video_mode = {1920, 1080, 32};
    sfClock *game_clock = sfClock_create();
    sfTime time = sfTime_Zero;

    window->score = 0;
    if (!window)
        return;
    window->window = sfRenderWindow_create(video_mode, "Toy Runner", sfClose | sfResize, NULL);
    sfRenderWindow_setFramerateLimit(window->window, 60);
    sfSprite_setOrigin(window->sprite_buzz, window->origin);
    while (sfRenderWindow_isOpen(window->window)) {
        time = sfClock_getElapsedTime(game_clock);
        close_window(window->window);
        window->gravity += 1;
        all_movements(window);
        jump(window);
        draw_sprite(window, game_clock, time);
        print_score(window->score, window->window);
        if (lose(window) == true)
            sfRenderWindow_close(window->window);
        sfRenderWindow_display(window->window);
    }

    sfRenderWindow_destroy(window->window);
}
