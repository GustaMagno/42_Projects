#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	conversor_base(unsigned long long number, int base, char *bases);
int	conversor10(long number);
int	ft_putstr(char *str);
int	ft_putchar(char c);
int	hex_type(unsigned long long number, int base, char typehex);
#define HEX "0123456789ABCDEF"
#define hex "0123456789abcdef"

#endif