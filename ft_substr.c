/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:55:11 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/04 11:08:13 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, unsigned int len)
{
	unsigned int	isub;
	unsigned int	isrc;
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
