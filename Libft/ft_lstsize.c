/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustoliv <gustoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 16:42:52 by gustoliv          #+#    #+#             */
/*   Updated: 2025/04/17 17:50:36 by gustoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
	unsigned int	i;

	i = 0;
	if (!lst)
		return (NULL);
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}