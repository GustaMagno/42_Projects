#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

# define HEX "0123456789ABCDEF"
# define hex "0123456789abcdef"

typedef unsigned long long t_ll;



int	ft_printf(const char *str,...);

#endif