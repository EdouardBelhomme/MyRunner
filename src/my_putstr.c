/*
** EPITECH PROJECT, 2022
** B-MUL-100-BDX-1-1-myrunner-edouard.belhomme
** File description:
** my_putstr
*/

#include "my.h"

int my_putstr(char const *str)
{
    for (; *str; str++)
        my_putchar(*str);
    return (*str);
}
