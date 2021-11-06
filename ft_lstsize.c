/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:23:14 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/06 13:13:43 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

