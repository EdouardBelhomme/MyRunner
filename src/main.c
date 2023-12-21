/*
** EPITECH PROJECT, 2021
** ebelhomme
** File description:
** main
*/

#include "my.h"

int main(int ac, char **av)
{
    if (ac != 2)
        return ERROR;
    if (my_strcmp(av[1], "map") == 0) {
        game_loop();
    }
    if (my_strcmp(av[1], "-h") == 0) {
        help(av[1]);
    }
    else {
        return ERROR;
    }
    return SUCCESS;
}
