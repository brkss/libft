/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:47:30 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/03 19:52:34 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void	ft_bzero(void *s, unsigned int n)
{
	unsigned int	t;
	unsigned char	*c;

	c = s;
	t = 0;
	while (t < n)
	{
		c[t] = '\0';
		t++;
	}
}

void	*ft_calloc(unsigned int count, unsigned int size)
{
	unsigned int	volume;
	unsigned int	t;
	void			*ptr;
	
	t = 0;
	volume = size * count;
	ptr = malloc(volume);
	ft_bzero(ptr, volume);
	return (ptr);
}
