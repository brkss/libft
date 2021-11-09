/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:50:02 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/09 13:47:32 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nsize(int n)
{
	int	size;

	size = 1;
	while (n > 9)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*a;
	int		negative;
	int		size;
	int		i;

	negative = 0;
	if(n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		n = n * -1;
		negative = 1;
	}
	size = ft_nsize(n) + negative;
	if(!(a = (char *)malloc((size + 1) * sizeof(char))))
			return (0);
	if (negative)
		a[0] = '-';
	i = size - 1;
	if(n == 0)
		a[i] = '0';
	while (n > 0)
	{
		a[i] = '0' + n % 10;
		n = n / 10;
		i--;
	}
	
	a[size] = '\0';
	//printf("a => %s \n", a);
	return (a);
}
