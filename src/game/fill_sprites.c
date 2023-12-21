/*
** EPITECH PROJECT, 2022
** B-MUL-100-BDX-1-1-myrunner-edouard->belhomme
** File description:
** fill_sprites
*/

#include "my.h"

game_t *fill_sprites(void)
{
    game_t *window = malloc(sizeof(game_t));

    if (!window)
        return NULL;
    window->origin = (sfVector2f){50, 50};
    window->background = sfTexture_createFromFile("./assets/background/background.png", NULL);
    window->sprite_background = sfSprite_create();
    sfSprite_setTexture(window->sprite_background, window->background, sfFalse);
    window->background_2 = sfTexture_createFromFile("./assets/background/background.png", NULL);
    window->sprite_background_2 = sfSprite_create();
    sfSprite_setTexture(window->sprite_background_2, window->background_2, sfFalse);
    window->ground = sfTexture_createFromFile("./assets/background/ground.png", NULL);
    window->sprite_ground = sfSprite_create();
    sfSprite_setTexture(window->sprite_ground, window->ground, sfFalse);
    window->ground_2 = sfTexture_createFromFile("./assets/background/ground.png", NULL);
    window->sprite_ground_2 = sfSprite_create();
    sfSprite_setTexture(window->sprite_ground_2, window->ground_2, sfFalse);
    window->ground_3 = sfTexture_createFromFile("./assets/background/ground.png", NULL);
    window->sprite_ground_3 = sfSprite_create();
    sfSprite_setTexture(window->sprite_ground_3, window->ground_3, sfFalse);
    window->plinth = sfTexture_createFromFile("./assets/background/plinth.png", NULL);
    window->sprite_plinth = sfSprite_create();
    sfSprite_setTexture(window->sprite_plinth, window->plinth, sfFalse);
    window->woody = sfTexture_createFromFile("./assets/characters/woody.png", NULL);
    window->sprite_woody = sfSprite_create();
    sfSprite_setTexture(window->sprite_woody, window->woody, sfFalse);
    window->buzz = sfTexture_createFromFile("./assets/characters/buzz_lightyear.png", NULL);
    window->sprite_buzz = sfSprite_create();
    sfSprite_setTexture(window->sprite_buzz, window->buzz, sfFalse);
    window->size_buzz = (sfIntRect){0, 0, 53, 100};
    window->size_woody = (sfIntRect){0, 0, 80, 100};
    set_positions(window);
    return window;
}
