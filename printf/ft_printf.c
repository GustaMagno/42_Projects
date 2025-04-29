/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustoliv <gustoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 21:16:54 by gustoliv          #+#    #+#             */
/*   Updated: 2025/04/29 15:54:55 by gustoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *str,...)
{
	va_list args;
	int		count;

	count = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%' && str++)
		{
			if (*str == 'd' || *str == 'i')
				count += conversor10(va_arg(args, int));
			else if (*str == 's')
				count += ft_putstr(va_arg(args, char *));
			else if (*str == 'x' || *str == 'X')
				count += hex_type(va_arg(args, unsigned int), 16, *str);
			else if (*str == 'c')
				count += ft_putchar(va_arg(args, int));
			if (*str != '%' && str++)
				continue ;
		}
		write(1, str++, 1);
	}
	va_end(args);
	return (count);
}
int main()
{
	printf("Eu tenho %d anos : %s, Char: %c\n", 16, "sdaa", 'a');
	ft_printf("Eu tenho %d anos : %s, Char: %c\n", 16, "sdaa", 'a');
}