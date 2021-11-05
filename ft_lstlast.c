/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_lstlast.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:36:20 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/05 12:44:18 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*p;
	
	if(!lst)
		return (0);
	p = lst;
	while(p->next)
	{
		p = p->next;
	}
	return (p);
}
