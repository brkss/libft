/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 21:42:39 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/10 13:59:06 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tmp;
	int				t;

	t = (int)n - 1;
	tmp = (unsigned char *)s;
	while (*tmp && t)
	{
		if (*tmp == (unsigned char)c)
			return ((void *)tmp);
		tmp++;
		t--;
	}
	if (*tmp == (unsigned char)c)
		return ((void *)tmp);
	return (0);
}
