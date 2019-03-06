/*
** ETNA PROJECT, 07/01/2019 by chen_l
** my_putstr.c
** File description:
**      [...]
*/

#include "lib.h"

void my_putstr(char *str)
{
    int i = 0;

    while (str[i]) {
        my_putchar(str[i]);
        i++;
    }
}
