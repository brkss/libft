/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:04:21 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/07 10:34:46 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*tmp_s1;
	unsigned char	*tmp_s2;
	unsigned int	i;

	if(!n)
		return (0);
	tmp_s1 = (unsigned char *)s1;
	tmp_s2 = (unsigned char *)s2;
	i = 0;	
	while (n - 1)
	{
		if(tmp_s1[i] - tmp_s2[i] != 0)
			return (tmp_s1[i] - tmp_s2[i]);
		i++;
		n--;
	}
	return (tmp_s1[i] - tmp_s2[i]);
}
