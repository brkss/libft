/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:20:24 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/03 17:21:18 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static void	ft_checksign_atoi(char *str, int *negative, unsigned int *index)
{
	if (str[*index] == '-' || str[*index] == '+')
	{
		if (str[*index] == '-')
			*negative = 1;
		*index = *index + 1;
	}
}

int	ft_atoi(char *str)
{
	unsigned int	i;
	int				j;
	int				negative;
	int				mul;
	int				total;

	negative = 0;
	i = 0;
	mul = 1;
	total = 0;
	while (str[i] && str[i] == ' ')
		i++;
	ft_checksign_atoi(str, &negative, &i);
	j = i;
	while (str[i] >= '0' && str[i] <= '9')
	{
		total = total * 10 + (int)(str[i] - 48);
		i++;
	}
	if (negative)
		return (total * -1);
	return (total);
}
/*
int main()
{
	printf("atoi result -> %d \n", atoi("     -+5552s"));
	printf("my atoi result -> %d \n", ft_atoi("     -+5552s"));
	return (0);
}
*/
