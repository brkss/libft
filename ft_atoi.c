/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:20:24 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/07 17:02:25 by bberkass         ###   ########.fr       */
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
	int				j;
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
	j = i;
	while (str[i] >= '0' && str[i] <= '9')
	{ 
		/*
		if ((unsigned long)(total * 10 + (int)(str[i] - 48)) > (unsigned long)9223372036854775807 && !negative )
				return (-1);
		else if ((unsigned long)(total * 10 + (int)(str[i] - 48)) > (unsigned long)9223372036854775807 + 1 && negative)
			return (0);
		*/
		total = total * 10 + (int)(str[i] - 48);
		i++;
	}
	if (negative)
		return (total * -1);
	return (total);
}
