/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:55:11 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/11 01:02:59 by bberkass         ###   ########.fr       */
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
	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		sub = (char *)malloc(sizeof(char));
	else
		sub = (char *)malloc((len + 1) * sizeof(char));
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
/*
#include <stdio.h>

int main()
{
	char *s = "this test will break your function";
	size_t max = ft_strlen(s);
	printf("res => %s \n", ft_substr(s, max + 5, max));


	return (0);
}*/
