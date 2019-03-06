/*
** ETNA PROJECT, 08/01/2019 by chen_l
** my_getnbr.c
** File description:
**      [...]
*/

#include "lib.h"

int my_getnbr(char *str)
{
    int i = 0;
    int sign = 1;
    int result = 0;

    while (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i] - 48);
        i++;
    }
    return (sign * result);
}
