/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 19:41:27 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/10 23:19:36 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*t_s;

	t_s = (unsigned char *)s;
	while (*t_s)
	{
		if (*t_s == (unsigned char)c)
			return ((char *)t_s);
		t_s++;
	}
	if (*t_s == (unsigned char)c)
		return ((char *)t_s);
	return (0);
}
