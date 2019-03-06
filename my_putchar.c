/*
** ETNA PROJECT, 07/01/2019 by chen_l
** my_putchar.c
** File description:
**      [...]
*/

#include "lib.h"

void my_putchar(int c)
{
    write(1, &c, 1);
}
