/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:47:30 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/10 13:57:07 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			volume;
	size_t			t;
	void			*ptr;

	t = 0;
	volume = size * count;
	ptr = (void *)malloc(volume);
	if (!ptr)
		return (0);
	ft_bzero(ptr, volume);
	return (ptr);
}
