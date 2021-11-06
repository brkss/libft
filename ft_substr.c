/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:55:11 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/06 11:47:53 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, size_t start, size_t len)
{
	size_t			isub;
	size_t			isrc;
	char			*sub;

	isub = 0;
	isrc = start;
	sub = (char *)malloc((len + 1) * sizeof(char));
	if (!s)
		return (0);
	while (s[isrc] && isub <= len)
	{
		sub[isub] = s[isrc];
		isrc++;
		isub++;
	}
	sub[isub] = '\0';
	return (sub);
}
