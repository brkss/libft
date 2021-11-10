/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:00:26 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/10 15:13:38 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

static int	get_borders(char const *s1, char const *set, int indc, int len)
{
	int	res;

	res = 0;
	if (indc == -1)
	{
		res = len - 1;
		while (res >= 0 && ft_chrinstr(set, s1[res]))
			res--;
		return (res);
	}
	while (s1[res] && ft_chrinstr(set, s1[res]))
			res++;
	return (res);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimed;
	int		i;
	int		start;
	int		end;

	if (!s1 || !set)
		return (0);
	i = 0;
	start = get_borders(s1, set, 1, ft_strlen(s1));
	end = get_borders(s1, set, -1, ft_strlen(s1));
	if (end <= -1)
		trimed = (char *)malloc(sizeof(char));
	else
		trimed = (char *)malloc(((end - start) + 2) * sizeof(char));
	if (!trimed)
		return (0);
	while (start < end + 1)
	{
		trimed[i] = (char)s1[start];
		start++;
		i++;
	}
	trimed[i] = '\0';
	return (trimed);
}
