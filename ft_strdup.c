/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:23:52 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/03 18:32:37 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static unsigned int	ft_strlen(const char *s)
{
	unsigned int	l;
	
	l = 0;
	while(s[l])
		l++;
	return (l);
}

char	*ft_strdup(const char *s1)
{
	
	char			*dup;
	unsigned int	i;
	unsigned int	sl;
	
	i = 0;
	sl = ft_strlen(s1);
	dup = (char *)malloc(sl + 1 * sizeof(char));
	if(!dup)
		return (0);
	while (s1[i] && i < sl)
	{
		dup[i] = s1[i];
		i++;
	}	
	dup[i] = '\0';
	return (dup);
}
