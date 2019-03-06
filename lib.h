/*
** ETNA PROJECT, 07/01/2019 by chen_l
** lib.h
** File description:
**      [...]
*/

#ifndef LIB_H
#define LIB_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct content_s
{
    const char *format;
    void (*func[4])();
} content_t;

//libmy's functions
void my_putnbr(int n);
void my_putchar(int c);
void my_putstr(char *str);
int my_strlen(char *str);
int my_nbrlen(int n);
int my_getnbr(char *str);
void my_putnbr_base(int n, char *base);
void my_putnbr_unsigned(unsigned int);

//my_printf.c functions
void print_float(double n, int p);
int check_option_float(const char *format, va_list va_list, int i);
int check_option(const char *format, va_list va_list, int i);
int check_option_base(const char *format, va_list va_list, int i);
int my_printf(const char *format, ...);

//precision.c function
void print_precision(va_list va_list, const char *format, int k);
#endif
