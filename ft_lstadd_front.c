/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:57:04 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/05 12:29:45 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"
/*
t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (0);
	node->next = NULL;
	node->content = content;

	return (node);
}
*/
void ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
int main()
{

	t_list *p = 0;	
	t_list *t = 0;
	t_list *HEAD = ft_lstnew("node 1");
	HEAD->next = ft_lstnew("node 2");
	HEAD->next->next = ft_lstnew("node 3");
	t = ft_lstnew("node 99");
	ft_lstadd_front(&HEAD, t);
	//HEAD = t;	
	p = HEAD;
	while(p->next)
	{
		printf("[%s]->", (char *)p->content);
		p = p->next;
	}	
	if(p->content)
		printf("[%s]", (char *)p->content);
	return (1);
}*/
