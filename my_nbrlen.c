/*
** ETNA PROJECT, 08/01/2019 by chen_l
** my_nbrlen.c
** File description:
**      [...]
*/

#include "lib.h"

int my_nbrlen(int n)
{
    int count = 0;

    if (n <= 0) {
        count++;
        n *= -1;
    }
    while (n > 0) {
        count++;
        n /= 10;
    }
    return (count);
}
