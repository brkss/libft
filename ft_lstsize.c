/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:23:14 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/05 12:34:58 by bberkass         ###   ########.fr       */
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
int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*p;

	size = 0;
	p = lst;
	while(p->next)
	{
		size++;
		p = p->next;
	}
	if(p->content)
		size++;
	return (size);
}
/*
int main()
{
	t_list *p = 0;	
	t_list *HEAD = ft_lstnew("node 1");
	HEAD->next = ft_lstnew("node 2");
	HEAD->next->next = ft_lstnew("node 3");
	p = HEAD;
	int node_size = ft_lstsize(HEAD);
	printf("list size => %d \n", node_size);
	while(p->next)
	{
		printf("[%s]->", (char *)p->content);
		p = p->next;
	}	
	if(p->content)
		printf("[%s]", (char *)p->content);
	
	return (1);
}*/
