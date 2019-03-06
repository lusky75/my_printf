/*
** ETNA PROJECT, 07/01/2019 by chen_l
** main.c
** File description:
**      [...]
*/

#include "lib.h"
#include <math.h>

int main(void)
{
    
    my_printf("1 - une chaine\n");
    my_printf("2 - %s\n", "une autre chaine");
    my_printf("4 - %s %d %s%c", "avec", 4, "parametres", '\n');
    my_printf("5 - %o\n", 42); 
    my_printf("6 - %u\n", (unsigned int)4200000000); 
    my_printf("7 - %x\n", 42);
    my_printf("8 - %X\n", 42);
    my_printf("9 - %f\n", 4 * cos(2.0));
    
    return 0;
}
