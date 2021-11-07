/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:30:45 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/07 10:41:48 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int				i;
	unsigned char	*t_d;
	unsigned char	*t_s;

	t_d = (unsigned char *)dst;
	t_s = (unsigned char *)src;
	if (t_d > t_s)
	{
		i = (int)(len) - 1;
		while (i >= 0)
		{
			t_d[i] = t_s[i];
			i--;
		}	
	}	
	else
	{
		i = 0;
		while (i < (int)len)
		{
			t_d[i] = t_s[i];
			i++;
		}
	}
	return (dst);
}
