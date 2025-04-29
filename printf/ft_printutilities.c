/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printutilities.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustoliv <gustoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:03:12 by gustoliv          #+#    #+#             */
/*   Updated: 2025/04/29 15:56:23 by gustoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	conversor_base(unsigned long long number, int base, char *bases)
{
	char	c;

	c = bases[number % base];
	if (number >= (unsigned long long)base)
		return (conversor_base(number / base, base, bases) + write(1,&c, 1));
	return (write(1, &c, 1));
}
int	conversor10(long number)
{
	long  n;
	int c;

	c = 0;
	n = number;
	if (n < 0)
	{
		write(1, "-", 1);
		c++;
		n = -n;
	}
	return(c + conversor_base(n, 10, HEX));

}

int	ft_putstr(char *str)
{
	size_t i;

	if (str == NULL)
		return (ft_putstr("(NULL)"));
	i = 0;
	while (str[i])
		i++;	
	return (write(1, str, i));
}
int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}
int	hex_type(unsigned long long number, int base, char typehex)
{
	if (typehex == 'x')
		return (conversor_base(number, base, hex));
	else
		return (conversor_base(number, base, HEX));
}