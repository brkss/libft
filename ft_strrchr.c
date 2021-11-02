/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 20:23:24 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/02 20:36:06 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*t_s;
	char	*holder;

	holder = 0;
	t_s = (char *)s;
	while(*t_s)
	{
		if(*t_s == c)
			holder = t_s; 
		t_s++;
	}
	return (holder);
}
