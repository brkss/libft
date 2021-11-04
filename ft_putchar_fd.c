/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:28:48 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/04 18:31:55 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>
//#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int main()
{
	int fd = open("file.txt", O_WRONLY | O_APPEND);
	ft_putchar_fd('d', fd);
	printf("file descriptor => %d", fd);
	return (0);
}*/
