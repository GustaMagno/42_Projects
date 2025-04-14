/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustoliv <gustoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 16:12:46 by marvin            #+#    #+#             */
/*   Updated: 2025/04/14 11:57:16 by gustoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*scpy;
	size_t	i;

	i = 0;
	scpy = (char *)malloc(ft_strlen(s) * sizeof(char) + 1);
	if (scpy == NULL)
		return (NULL);
	while (s[i])
	{
		scpy[i] = s[i];
		i++;
	}
	scpy[i] = '\0';
	return (scpy);
}