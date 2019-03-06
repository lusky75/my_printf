/*
** ETNA PROJECT, 07/01/2019 by chen_l
** my_putnbr_base.c
** File description:
**      [...]
*/

#include "lib.h"

void my_putnbr_base(int n, char *base)
{
    unsigned int nb = n;
    unsigned int m;
    unsigned int i = my_strlen(base);
    
    if (n < 0) {
        m = 4294967295;
        m -= nb;
        nb = m;
    }
    if (nb < i)
        my_putchar(base[nb]);
    else {
        my_putnbr_base(nb / i, base);
        my_putnbr_base(nb % i, base);
    }
}
