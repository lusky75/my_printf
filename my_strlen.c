/*
** ETNA PROJECT, 07/01/2019 by chen_l
** my_strlen.c
** File description:
**      [...]
*/

#include "lib.h"

int my_strlen(char *str)
{
    int i = 0;

    while (str[i])
        i++;
    return i;
}
