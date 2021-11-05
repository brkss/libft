/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:13:55 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/05 18:02:13 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	
	t_list	*p;
	t_list	*t;

	t = *lst;
	p = *lst;
	printf("t content => %s \n", (char *)t->content);
   	while(t)
   	{
		printf("next head content => %s \n", (char *)p->content);
	   	t = p->next;
		del(p->content);
		free(p);
		p = NULL;
		p = t;
   	}
   
   *lst = NULL;
}
