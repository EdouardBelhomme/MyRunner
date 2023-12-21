/*
** EPITECH PROJECT, 2022
** B-MUL-100-BDX-1-1-myrunner-edouard.belhomme
** File description:
** score
*/

#include "my.h"


int strlen_int(int nb)
{
    int result = 0;

    while (nb > 0) {
        nb = nb / 10;
        result += 1;
    }
    return result;
}

char *convert_int_str(int nb)
{
    char *result = malloc(sizeof(char) * strlen_int(nb) + 1);
    int i = 0;

    if (!result)
        return NULL;
    while (nb > 0) {
        result[i] = (nb % 10) + 48;
        i++;
        nb = nb / 10;
    }
    result[i] = '\0';
    return result;
}

void print_score(int score, sfRenderWindow *window)
{
    sfText *score_str = sfText_create();
    sfFont *font = sfFont_createFromFile("./assets/arial.ttf");

    sfText_setString(score_str, convert_int_str(score));
    sfText_setFont(score_str, font);
    sfText_setPosition(score_str, (sfVector2f){50, 50});
    sfText_setCharacterSize(score_str, 50);
    sfRenderWindow_drawText(window, score_str, NULL);
}