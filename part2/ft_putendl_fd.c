/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:41:29 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/04 18:46:26 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <fcntl.h>
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}	
	write(fd, "\n", 1);
}
/*

int main()
{
	int fd = open("file.txt", O_WRONLY | O_APPEND);
	ft_putendl_fd("hello file", fd);
	printf("file descriptor => %d", fd);
	return (0);
}*/
