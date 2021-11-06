/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:15:38 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/06 21:42:14 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*t;
	t_list	*head;
	t_list	*r;
	t_list	*tmp;

	tmp = 0;
	head = 0;
	r = 0;
	t = lst;
	while(t)
	{
		if(!head)
		{
			head = (t_list *)malloc(sizeof(t_list));
			head->next = NULL;
			head->content = f(t->content);
			r = head;	
		}
		else
		{
			tmp = (t_list *)malloc(sizeof(t_list));
			tmp->next = NULL;
			tmp = f(t->content);
			r->next = tmp;
			r = tmp;
		}
		t = t->next;
	}
	return (head);
}*/
