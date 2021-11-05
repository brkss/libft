/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:50:02 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/04 18:59:19 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static int	ft_nsize(int n)
{
	int	size;

	size = 0;
	if (n < 0)
		n = n * -1;
	while (n > 0)
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
	if (n < 0)
	{
		n = n * -1;
		negative = 1;
	}
	size = ft_nsize(n);
	a = (char *)malloc((size + negative + 1) * sizeof(char));
	if (negative)
		a[0] = '-';
	i = size - 1 + negative;
	while (n > 0)
	{
		a[i] = '0' + n % 10;
		n = n / 10;
		i--;
	}
	a[size] = '\0';
	printf("a => %s \n", a);
	return (a);
}
/*
int main()
{
	int n = 2147483648;
	printf("size => %d \n", ft_nsize(n));
	ft_itoa(n);
	return (0);
}*/
