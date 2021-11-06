/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 20:44:29 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/06 21:47:10 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned char *t_s1;
	unsigned char *t_s2;

	t_s1 = (unsigned char *)s1;
	t_s2 = (unsigned char *)s2;
	
	while (*t_s1 && *t_s2 && n)
	{
		if (*t_s1 - *t_s2 != 0)
			return (*t_s1 - *t_s2);
		t_s1++;
		t_s2++;
		n--;
	}
	return (0);
}
