/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 20:23:24 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/10 23:21:35 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*t_s;
	unsigned char	*holder;

	holder = 0;
	t_s = (unsigned char *)s;
	while (*t_s)
	{
		if (*t_s == (unsigned char)c)
			holder = t_s;
		t_s++;
	}
	if (*t_s == c)
		holder = t_s;
	return ((char *)holder);
}
