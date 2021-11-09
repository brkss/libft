/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:45:52 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/09 14:01:36 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*p;
	
	if(*lst)
	{	
		p = *lst;
		while(p->next)
			p = p->next;
		p->next = new;
	}
	else {
		*lst = new;
	}
}
