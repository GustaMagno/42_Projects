/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustoliv <gustoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 16:08:29 by gustoliv          #+#    #+#             */
/*   Updated: 2025/04/18 17:50:36 by gustoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// int main(){

// 	t_list *t = ft_lstnew(ft_strdup("asa"));
// 	t_list *t2 = ft_lstnew(ft_strdup("asa"));
// 	t->next = t2;

// 	ft_lstiter(t, free);
// }