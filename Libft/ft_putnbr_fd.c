/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustoliv <gustoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 19:23:33 by gustoliv          #+#    #+#             */
/*   Updated: 2025/04/16 19:49:44 by gustoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	long	nlong;
	char	c;

	nlong = n;
	if (nlong < 0)
	{
		write(fd, "-", 1);
		nlong *= -1;
	}
	if (nlong < 10)
	{
		c = nlong + '0';
		write(fd, &c, 1);		
	}
	else
	{
		ft_putnbr_fd(nlong / 10, fd);
		ft_putnbr_fd(nlong % 10, fd);
	}
}
