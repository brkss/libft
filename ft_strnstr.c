/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:11:18 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/06 11:07:50 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t loc)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;	
	while (haystack[i] && i < loc )
	{
		if(haystack[i] == needle[j])
		{
			while (haystack[i + j] == needle[j] && haystack[i + j] && needle[j])
				j++;
			if(j == ft_strlen(needle))
				return ((char*)haystack + i);
			j = 0;
		}
		i++;
	}
	return (0);
}
