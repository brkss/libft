/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 17:52:22 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/06 10:54:17 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	t;
	unsigned char	*s;

	s = (unsigned char *)b;
	t = 0;
	while (t < len)
	{
		s[t] = (unsigned char)c;
		t++;
	}
	return (b);
}
