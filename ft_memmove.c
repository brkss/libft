/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:30:45 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/04 10:42:55 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, unsigned int len)
{
	int				i;
	unsigned char	*t_d;
	unsigned char	*t_s;

	t_d = (unsigned char *)dst;
	t_s = (unsigned char *)src;
	if (dst > src)
	{
		i = len - 1;
		while (i >= 0)
		{
			t_d[i] = t_s[i];
			i--;
		}	
	}	
	else
	{
		i = 0;
		while ((unsigned int)i < len)
		{
			t_d[i] = t_s[i];
			i++;
		}
	}
	return (dst);
}
