/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:23:20 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/12 00:19:08 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static unsigned int	ft_strlen(const char *s)
{
	unsigned int	l;

	l = 0;
	while (s[l])
		l++;
	return (l);
}

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int dstsize)
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
