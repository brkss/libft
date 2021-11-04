/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:29:37 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/04 17:03:29 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_strlen(const char *s)
{
	int	l;

	l = 0;
	while (s[l])
		l++;
	return (l);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	int				l;
	char			*res;

	i = 0;
	l = ft_strlen(s);
	res = (char *)malloc(l * sizeof(char));
	if (res == 0)
		return (0);
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	return (res);
}
/*
char fcp(unsigned int index, char c)
{
	return c + 1;
}

int main()
{

	char (*mmp)(unsigned int, char);
	mmp = &fcp;
	char *s = ft_strmapi("abcdef", mmp);
	printf("s => %s \n", s);
	return (0);
}*/
