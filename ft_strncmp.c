/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 20:44:29 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/07 16:05:58 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned char *t_s1;
	unsigned char *t_s2;
	unsigned int	i;
	
	i = 0;
	if(!s1 && !s2)
		return (0);
	t_s1 = (unsigned char *)s1;
	t_s2 = (unsigned char *)s2;
	if(!ft_strlen((char *)t_s1) && !ft_strlen((char *)t_s2))
		return (t_s1[i] - t_s2[i]);
	while (i < n - 1 && t_s1[i] && t_s2[i] )
	{
		if (t_s1[i] - t_s2[i] != 0)
			return (t_s1[i] - t_s2[i]);
		i++;
	}
	return (t_s1[i] - t_s2[i]);
}
