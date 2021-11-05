/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:21:23 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/04 17:26:27 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;
	
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void fpt(unsigned int i, char *c)
{
	*c = 'x'; 
}

int main()
{
	
	void (*ptr)(unsigned int, char*);

	ptr = &fpt;
	char s[6] = "hello";
	ft_striteri(s, fpt);
	printf("s is now => %s \n", s);

	return (0);
}*/
