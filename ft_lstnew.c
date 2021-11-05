/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:36:49 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/05 11:54:39 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
#include "libft.h"

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
/*
int main()
{
	
	char *s = "hello";
	t_list *list = ft_lstnew(s);
	printf("content => %s \n", (char *)list->content);

	return (0);
}*/
