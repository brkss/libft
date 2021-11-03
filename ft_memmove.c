/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:30:45 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/03 21:16:56 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, unsigned int len)
{
	unsigned int	i;
	unsigned char	*t_d;
	unsigned char	*t_s;

	t_d = (unsigned char *)dst;
	t_s = (unsigned char *)src;
	if(dst > src)
	{
		printf("used this ! \n");
		i = len - 1;
		while(i >= 0)
		{
			t_d[i] = t_s[i];
			i--;
		}	
	}	
	else
	{
		i = 0;
		while(i < len)
		{
			t_d[i] = t_s[i];
			i++;
		}
	}
	return (dst);
}

