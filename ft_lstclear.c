/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:13:55 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/10 14:49:48 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*p;
	t_list	*t;

	t = *lst;
	p = *lst;
	while (t)
	{
		t = p->next;
		del(p->content);
		free(p);
		p = NULL;
		p = t;
	}
	*lst = NULL;
}
