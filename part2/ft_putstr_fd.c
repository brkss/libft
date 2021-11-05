/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:34:30 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/04 18:39:53 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <fcntl.h>
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}	
}
/*
int main()
{
	int fd = open("file.txt", O_WRONLY | O_APPEND);
	ft_putstr_fd("hello file", fd);
	printf("file descriptor => %d", fd);
	return (0);
}*/
