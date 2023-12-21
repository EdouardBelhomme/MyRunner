/*
** EPITECH PROJECT, 2022
** B-MUL-100-BDX-1-1-myrunner-edouard.belhomme
** File description:
** struct
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>
#include <SFML/System/Clock.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>

#ifndef STRUCT_H_
    #define STRUCT_H_

typedef struct game_s
{
    sfRenderWindow *window;
    sfEvent event;
    sfTexture *buzz;
    sfTexture *woody;
    sfTexture *ground;
    sfTexture *ground_2;
    sfTexture *ground_3;
    sfTexture *plinth;
    sfTexture *background;
    sfTexture *background_2;
    sfSprite *sprite_buzz;
    sfSprite *sprite_woody;
    sfSprite *sprite_ground;
    sfSprite *sprite_ground_2;
    sfSprite *sprite_ground_3;
    sfSprite *sprite_plinth;
    sfSprite *sprite_background;
    sfSprite *sprite_background_2;
    sfSprite *sprite_background_3;
    sfVector2f pos_buzz;
    sfVector2f pos_woody;
    sfVector2f pos_ground;
    sfVector2f pos_ground_2;
    sfVector2f pos_ground_3;
    sfVector2f pos_plinth;
    sfVector2f pos_background;
    sfVector2f pos_background_2;
    sfVector2f origin;
    sfVector2f scale_buzz;
    sfVector2f scale_woody;
    sfIntRect size_buzz;
    sfIntRect size_woody;
    int move;
    int gravity;
    int score;
} game_t;

#endif /* !STRUCT_H_ */
