/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 17:52:22 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/02 11:15:15 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, unsigned int len)
{
	unsigned int	t;
	unsigned char	*s;

	s = (unsigned char *)b;
	t = 0;
	while (t < len)
	{
		s[t] = (unsigned char)c;
		t++;
	}
	return (b);
}
