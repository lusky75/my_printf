/*
** ETNA PROJECT, 10/01/2019 by chen_l
** precision.c
** File description:
**      [...]
*/

#include "lib.h"

void print_precision(va_list va_list, const char *format, int k)
{
    char *nb;
    int i = 0;
    int j = 0;
    int l = k + 1;

    while (format[++k] >= '0' && format[k] <= '9')
        ++i;
    nb = malloc(sizeof(char) * i);
    if (format[k] == 'f') {
        k = i;
        while (i--) {
            nb[j] = format[l];
            l++;
            j++;
        }
    }
    print_float(va_arg(va_list, double), my_getnbr(nb));
    free(nb);
}
