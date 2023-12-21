/*
** EPITECH PROJECT, 2021
** B-CPE-100-BDX-1-1-cpoolday03-edouard.belhomme
** File description:
** my_putchar
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
