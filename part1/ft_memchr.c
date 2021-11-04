/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 21:42:39 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/02 21:53:03 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	unsigned char	*tmp;
	
	tmp = (unsigned char *)s;
	while(*tmp && n)
	{
		if(*tmp == (unsigned char)c)
			return ((void *)tmp);
		tmp++;
		n--;
	}	
	return (0);
}
