/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 16:32:07 by marvin            #+#    #+#             */
/*   Updated: 2025/04/12 16:32:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	int		keep;

	keep = -1;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			keep = i;
		i++;
	}
	if (c == '\0')
		return (&s[i]);
	if (keep >= 0)
		return (&s[keep]);
	return (NULL);
}
