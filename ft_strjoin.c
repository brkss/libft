/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:39:10 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/11 01:12:43 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcat(char *dest, const char *s1, const char *s2)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (s1[i])
	{
		dest[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
	{
		dest[j] = s2[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	int		s1_length;
	int		s2_length;

	if (!s1 || !s2)
		return (0);
	s1_length = ft_strlen(s1);
	s2_length = ft_strlen(s2);
	joined = (char *)malloc((s1_length + s2_length + 1) * sizeof(char));
	if (!joined)
		return (0);
	if (!joined)
		return (0);
	joined = ft_strcat(joined, s1, s2);
	return (joined);
}
