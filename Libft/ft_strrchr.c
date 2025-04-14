/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustoliv <gustoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 16:32:07 by marvin            #+#    #+#             */
/*   Updated: 2025/04/14 18:04:40 by gustoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		keep;

	keep = -1;
	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			keep = i;
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	if (keep >= 0)
		return ((char *)&s[keep]);
	return (NULL);
}
