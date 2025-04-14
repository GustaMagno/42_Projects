/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustoliv <gustoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 12:02:59 by gustoliv          #+#    #+#             */
/*   Updated: 2025/04/11 19:30:07 by gustoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[i] == '\0')
		return (big);
	while(big[i] && i < len)
	{
		j = 0;
		while(big[i + j] == little[j] && big[i + j])
		{
			j++;
		}
		if (little[j] == '\0')
			return (&big[i]);
		i++;
	}
	return (NULL);
}