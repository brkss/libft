/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:00:26 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/04 12:57:09 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static int	ft_strlen(const char *s)
{
	int	l;

	l = 0;
	while (s[l])
		l++;
	return (l);
}

static int	ft_chrinstr(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}	
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimed;
	int		sl;
	int		i;
	int		start;
	int		end;

	i = 0;
	sl = ft_strlen(s1);
	start = 0;
	end = sl;
	while (s1[start] && ft_chrinstr(set, s1[start]))
		start++;
	while (end >= 0 && ft_chrinstr(set, s1[end - 1]))
		end--;
	trimed = (char *)malloc(((end - start) + 1) * sizeof(char));
	if (!trimed)
		return (0);
	while (start < end)
	{
		trimed[i] = (char)s1[start];
		start++;
		i++;
	}
	trimed[start] = '\0';
	return (trimed);
}
