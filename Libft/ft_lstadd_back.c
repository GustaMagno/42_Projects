/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustoliv <gustoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:20:13 by gustoliv          #+#    #+#             */
/*   Updated: 2025/04/17 18:43:43 by gustoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
		return;
	if (!*lst)
	{
		*lst = new;
		return;
	}
	temp = *lst;
	while (temp->next != NULL)
	{
		temp = (*lst)->next;
	}
	temp->next = new;
}