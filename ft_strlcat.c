/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:23:20 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/13 21:39:23 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	unsigned int	t;
	unsigned int	sl;
	unsigned int	dl;

	dl = ft_strlen(dest);
	sl = ft_strlen(src);
	if (dstsize == 0)
		return (sl);
	if (dstsize <= dl)
		return (sl + dstsize);
	t = 0;
	while (t + 1 < dstsize - dl && src[t])
	{
		dest[t + dl] = src[t];
		t++;
	}
	dest[t + dl] = '\0';
	return (dl + sl);
}
