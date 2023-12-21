/*
** EPITECH PROJECT, 2021
** CPool day 06
** File description:
** my_strcmp
*/

int my_strcmp(char const *s1, char const *s2)
{
    int index = 0;

    while (s1[index] != '\0') {
        if (s1[index] != s2[index])
            return s1[index] - s2[index];
        index++;
    }
    return 0;
}
