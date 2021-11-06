/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 19:21:08 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/03 16:24:18 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dst, const void *src, unsigned int n)
{
	unsigned int	t;
	unsigned char	*t_d;
	unsigned char	*t_s;

	t_d = (unsigned char *)dst;
	t_s = (unsigned char *)src;
	t = 0 ;
	while (t < n)
	{
		t_d[t] = t_s[t];
		t++;
	}
	return (dst);
}
