/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:00:26 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/09 13:11:47 by bberkass         ###   ########.fr       */
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

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimed;
	int		sl;
	int		i;
	int		start;
	int		end;

	if(!s1 || !set)
		return (0);
	i = 0;
	sl = ft_strlen(s1);
	start = 0;
	end = sl - 1;
	while (s1[start] && ft_chrinstr(set, s1[start]))
		start++;
	while (end >= 0 && ft_chrinstr(set, s1[end]))
		end--;
	if(end <= -1)
		trimed = (char *)malloc(sizeof(char));
	else
		trimed = (char *)malloc(((end - start) + 2) * sizeof(char));
	if(!trimed)
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
