/*
** EPITECH PROJECT, 2022
** B-MUL-100-BDX-1-1-myrunner-edouard.belhomme
** File description:
** init_window
*/

#include "my.h"

static sfRenderWindow *create_render_window(unsigned int x, unsigned int y, \
unsigned int bbp, char *title)
{
    sfVideoMode video_mode = {x, y, bbp};

    return \
        (sfRenderWindow_create(video_mode, title, sfResize | sfClose, NULL));
}
