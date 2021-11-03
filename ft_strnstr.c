/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:11:18 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/03 14:43:23 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static unsigned int	ft_strlen(const char *s)
{
	unsigned int	l;

	l = 0;
	while(s[l])
		l++;
	return (l);
}

char	*ft_strnstr(const char *haystack, const char *needle, unsigned int loc)
{
	unsigned int	i;
	unsigned int	j;

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
