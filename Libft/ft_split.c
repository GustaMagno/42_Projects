/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustoliv <gustoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:02:35 by gustoliv          #+#    #+#             */
/*   Updated: 2025/04/14 15:53:56 by gustoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	sep;
	int		check;

	i = 0;
	sep = 0;
	while (s[i])
	{
		check = 0;
		while (s[i] == c)
		{
			i++;
			check = 1;
		}
		if (check == 1)
			sep++;
		if (s[i] != '\0')
			i++;
	}
	return (sep);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		i;

	i = 0;
	strs = (char **) malloc((count_words(s, c) + 2) * sizeof(char *));
	if (!strs)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			strs[i] = new_word(s, c);
			if (!strs[i])
				return (NULL);
			i++;
			while (*s != c && *s)
				s++;
		}
		else
			s++;
	}
}