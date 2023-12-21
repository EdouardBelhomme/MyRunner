/*
** EPITECH PROJECT, 2022
** B-MUL-100-BDX-1-1-myrunner-edouard.belhomme
** File description:
** help
*/

#include "my.h"

int help(char *av)
{
    if (av != NULL && av[0] == '-' && av[1] == 'h' && av[2] == '\0') {
    my_putstr("Finite runner created with CSFML.\n\n");
    my_putstr("USAGE\n  ./my_runner map\n\n\n");
    my_putstr("OPTIONS\n");
    my_putstr("  -i\t\t\tlaunch the game in infinity mode.\n");
    my_putstr("  -h\t\t\tprint the usage and quit.\n\n");
    my_putstr("USER INTERACTIONS\n  SPACE_KEY\t\tjump.\n");
    }
    return SUCCESS;
}
