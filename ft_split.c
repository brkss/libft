/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:03:50 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/04 14:49:34 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_wordcount(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		while (*s && *s != c)
			s++;
		if (*s)
			count++;
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

static char	*ft_popword(const char *s, char c)
{
	int		word_length;
	int		i;
	char	*word;

	i = 0;
	word_length = ft_wordlength(s, c);
	word = (char *)malloc((word_length + 1) * sizeof(char));
	if (!word)
		return (0);
	while (*s && *s != c)
	{
		word[i] = *s;
		s++;
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(const char	*s, char c)
{
	char	**splited;
	int		word_count;
	char	*word;
	int		i;

	word_count = ft_wordcount(s, c);
	splited = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!splited)
		return (0);
	while (*s && i <= word_count)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			splited[i] = ft_popword(s, c);
			i++;
		}
		while (*s && *s != c)
			s++;
	}
	splited[i] = 0;
	return (splited);
}
/*
int main()
{	
	printf("hello this is a test \n");
	char **res = ft_split("  hello this is a test   ", ' ');
	while(*res)
	{
		printf("s => %s \n", *res);
		res++;
	}
	return 0;
}*/
