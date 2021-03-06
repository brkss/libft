/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:23:52 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/14 15:26:55 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_strdup(const char *s1)
{
	char			*dup;
	unsigned int	i;
	unsigned int	sl;

	i = 0;
	sl = ft_strlen(s1);
	dup = (char *)malloc(sl + 1 * sizeof(char));
	if (!dup)
		return (0);
	while (s1[i] && i < sl)
	{
		dup[i] = s1[i];
		i++;
	}	
	dup[i] = '\0';
	return (dup);
}
