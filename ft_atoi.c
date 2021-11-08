/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:20:24 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/08 10:47:57 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_checksign_atoi(const char *str, int *negative, unsigned int *index)
{
	if (str[*index] == '-' || str[*index] == '+')
	{
		if (str[*index] == '-')
			*negative = 1;
		*index = *index + 1;
	}
}

int	ft_atoi(const char *str)
{
	unsigned int	i;
	int				negative;
	int				mul;
	int				total;

	negative = 0;
	i = 0;
	mul = 1;
	total = 0;
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++;
	ft_checksign_atoi(str, &negative, &i);
	while (str[i] && ft_isdigit(str[i]))
	{ 
		if ((unsigned long)total * 10 + (str[i] - 48) > (unsigned long)9223372036854775807 && !negative )
				return (-1);
		if ((unsigned long)total * 10 + (str[i] - 48) > (unsigned long)9223372036854775807 + 1 && negative )
				return (0);
		total = total * 10 + (str[i] - 48);
		i++;
	}
	if (negative)
		return (total * -1);
	return (total);
}

#include <stdlib.h>
#include <stdio.h>
int main()
{

printf("res => %d\n", ft_atoi("-2147483648"));

	return (0);
}

//-1474836432
