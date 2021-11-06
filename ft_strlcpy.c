/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:48:52 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/06 10:58:49 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char	*dst, char *src, size_t dstsize)
{
	unsigned int	t;

	if (!dst)
		return (0);
	t = 0;
	while (t < dstsize - 1)
	{
		dst[t] = src[t];
		t++;
	}
	dst[t] = '\0';
	return (t);
}
