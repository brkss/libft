/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:24:36 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/09 12:21:10 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// check if char from s1 exist in the set
int	ft_chrins(const char *set, char c)
{
	int	i;

	i = 0;
	while(set[i])
	{
		printf("============ \n");
		printf("cmp %c : %c \n", set[i], c);
		if(set[i] == c)
		{
			printf("catch %c : %c \n", set[i], c);
			return (1);
		}
		i++;	
		printf("============ \n");
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*s;

	s = NULL;	
	i = 0;
	start = 0;
	end = ft_strlen(s1) - 1;
	// find the start while chr in s1 is in the set!
	while(s1[start] && ft_chrins(set, s1[start]))
		start++;
	// find the end  while chr in s1 is in the set!
	while(end >= 0 && ft_chrins(set, s1[end]))
		end--;
	if(end == -1)
		s = (char *)malloc(sizeof(char));
	else
		s = (char *)malloc((end - start) + 2 * sizeof(char));
	if(!s)
		return (0);
	printf("start => %d \n", start);
	printf("end => %d \n", end);
	while(start < end)
	{
		s[i] = s1[start];
		start++;
		i++;
	}
	s[i] = '\0';
	printf("s1 => %s \n", s1);

	return (s);
}

int main()
{
	printf("trim => %s \n", ft_strtrim("00011s0011000", "01"));
	return (0);
}

// [000] [s]abcdfffffff000ss[end] [00]
