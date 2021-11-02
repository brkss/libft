/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:35:10 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/02 19:22:30 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int	ft_isalpha(unsigned char c);
int	ft_isdigit(unsigned char d);
int	ft_isalnum(unsigned char c);
int	ft_isascii(int c);
int	ft_isprint(unsigned char c);
int	ft_strlen(char *s);
char	*ft_memset(void *b, int c, unsigned int len);
void	ft_bzero(void *s, unsigned int	n);
void	*ft_memcpy(void *dst, const void *src, unsigned int n);
unsigned int	ft_strlcpy(char	*dst, char *src, unsigned int dstsize);
unsigned int	ft_strlcat(char *dest, const char *src, unsigned int dstsize);
int	 ft_toupper(int c);

#endif
