/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:48:52 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/10 14:12:33 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char	*dst, char *src, size_t dstsize)
{
	unsigned int	t;
	unsigned int	sl;

	sl = ft_strlen(src);
	if (dstsize == 0)
		return (sl);
	t = 0;
	while (t < dstsize - 1 && src[t])
	{
		dst[t] = src[t];
		t++;
	}
	dst[t] = '\0';
	return (sl);
}
