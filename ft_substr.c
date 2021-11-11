/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:55:11 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/11 15:03:52 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_byindex(const char *s, int index, size_t len)
{
	int	l;

	l = index;
	while (s[l])
		l++;
	if ((int)len < (l - index))
		return ((int)len);
	return (l - index);
}

char	*ft_substr(char const *s, size_t start, size_t len)
{
	size_t			isub;
	size_t			isrc;
	char			*sub;
	int				l;

	isub = 0;
	isrc = start;
	if (!s)
		return (0);
	l = len_byindex(s, start, len);
	if (start >= ft_strlen(s))
		sub = (char *)malloc(sizeof(char));
	else
		sub = (char *)malloc((l + 1) * sizeof(char));
	if (!sub)
		return (0);
	while (s[isrc] && isub < len && start < ft_strlen(s))
	{
		sub[isub] = s[isrc];
		isrc++;
		isub++;
	}
	sub[isub] = '\0';
	return (sub);
}
