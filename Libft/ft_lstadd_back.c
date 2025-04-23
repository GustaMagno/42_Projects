/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustoliv <gustoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:20:13 by gustoliv          #+#    #+#             */
/*   Updated: 2025/04/23 15:39:25 by gustoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	temp = ft_lstlast(*lst);
	temp->next = new;
}

int main()
{
	t_list	*a;
	t_list	*b;
	
	a = ft_lstnew(ft_strdup("ola"));
	b = ft_lstnew(ft_strdup("hello"));
	ft_lstadd_back(&a, b);
	printf("%s\n", (char *)a->content);
	printf("%s\n", (char *)a->next->content);
}