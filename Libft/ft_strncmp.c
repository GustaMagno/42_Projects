/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustoliv <gustoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 12:03:02 by gustoliv          #+#    #+#             */
/*   Updated: 2025/04/11 19:10:30 by gustoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	cont1;

	cont1 = 0;
	while (cont1 < n)
	{
		if (s1[cont1] != s2[cont1] || s1[cont1] == '\0' || s2[cont1] == '\0')
			return (s1[cont1] - s2[cont1]);
		cont1++;
	}
	return (0);
}