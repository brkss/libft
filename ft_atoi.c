/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:20:24 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/10 13:55:24 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_checksign(const char *str, int *negative, unsigned int *index)
{
	if (str[*index] == '-' || str[*index] == '+')
	{
		if (str[*index] == '-')
			*negative = 1;
		*index = *index + 1;
	}
}

int	check_long(int total, char c, int negative)
{
	int	res;

	res = 1;
	if ((unsigned long)total * 10 + (c - 48)
		> (unsigned long)9223372036854775807 && !negative)
		res = -1;
	else if ((unsigned long)total * 10 + (c - 48)
		> (unsigned long)9223372036854775807 + 1 && negative)
		res = 0;
	return (res);
}

int	ft_atoi(const char *str)
{
	unsigned int	i;
	int				negative;
	int				mul;
	int				total;
	int				is_max;

	is_max = 0;
	negative = 0;
	i = 0;
	mul = 1;
	total = 0;
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++;
	ft_checksign(str, &negative, &i);
	while (str[i] && ft_isdigit(str[i]))
	{
		is_max = check_long(total, str[i], negative);
		if (is_max != 1)
			return (is_max);
		total = total * 10 + (str[i] - 48);
		i++;
	}
	if (negative)
		return (total * -1);
	return (total);
}
