/*
** EPITECH PROJECT, 2021
** ebelhomme
** File description:
** my
*/

#include "macros.h"
#include "struct.h"
#include <SFML/Graphics.h>
#include <SFML/Graphics/Export.h>
#include <SFML/Graphics/Rect.h>
#include <SFML/Graphics/Text.h>
#include <SFML/System.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>
#include <SFML/System/Clock.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <stdbool.h>

#ifndef MY_H_
    #define MY_H_

void my_putchar(char c);
int my_putstr(char const *str);
int my_strcmp(char const *s1, char const *s2);
void set_positions(game_t *window);
game_t *fill_sprites(void);
void scale(game_t *window);
void movements(game_t *window);
void jump(game_t *window);
void draw_sprite(game_t *window, sfClock *game_clock, sfTime time);
void close_window(sfRenderWindow *window);
void game_loop(void);
int help(char *av);
bool lose(game_t *window);
void print_score(int score, sfRenderWindow *window);
void all_movements(game_t *window);

#endif /* !MY_H_ */