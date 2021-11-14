/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:03:50 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/14 13:56:38 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	freed_up(char **s, int filled)
{
	int	i;

	i = 0;
	while (i < filled)
	{
		free(s[i]);
		i++;
	}
	free(s);
}

static int	ft_wordcount(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static int	ft_wordlength(const char *s, char c)
{
	int	l;

	l = 0;
	while (*s && *s != c)
	{
		s++;
		l++;
	}
	return (l);
}

static int	ft_popword(char **splited, const char *s, char c, int fi)
{
	int		word_length;
	int		i;
	char	*word;

	i = 0;
	word_length = ft_wordlength(s, c);
	word = (char *)malloc((word_length + 1) * sizeof(char));
	if (!word)
	{
		freed_up(splited, fi);
		return (0);
	}
	while (*s && *s != c)
	{
		word[i] = *s;
		s++;
		i++;
	}
	word[i] = '\0';
	splited[fi] = word;
	return (1);
}

char	**ft_split(const char	*s, char c)
{
	char	**splited;
	int		i;
	int		wc;

	if (!s)
		return (0);
	i = 0;
	wc = ft_wordcount(s, c);
	splited = (char **)malloc((wc + 1) * sizeof(char *));
	if (!splited)
		return (0);
	while (*s && i < wc)
	{
		while (*s && *s == c)
			s++;
		if (*s && ++i)
		{
			if (!ft_popword(splited, s, c, i - 1))
				return (0);
		}
		while (*s && *s != c)
			s++;
	}
	splited[i] = 0;
	return (splited);
}
