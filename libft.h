/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:35:10 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/05 12:35:10 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>

typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;

int				ft_isalpha(unsigned char c);
int				ft_isdigit(unsigned char d);
int				ft_isalnum(unsigned char c);
int				ft_isascii(int c);
int				ft_isprint(unsigned char c);
int				ft_strlen(char *s);
char			*ft_memset(void *b, int c, unsigned int len);
void			ft_bzero(void *s, unsigned int	n);
void			*ft_memcpy(void *dst, const void *src, unsigned int n);
unsigned int	ft_strlcpy(char	*dst, char *src, unsigned int dstsize);
unsigned int	ft_strlcat(char *dest, const char *src, unsigned int dstsize);
int	 			ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
void			*ft_memchr(const void *s, int c, unsigned int n);
int				ft_memcmp(const void *s1, const void *s2, unsigned int n);
char			*ft_strnstr(const char *haystack, const char *needle, unsigned int loc);
char			*ft_strdup(const char *s1);
int				ft_atoi(char *str);
void			*ft_calloc(unsigned int count, unsigned int size);
void			*ft_memmove(void *dst, const void *src, unsigned int len);

//
// PART 2
// 

char	*ft_substr(char const *s, unsigned int start, unsigned int len);
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_split(const char	*s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void 	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

//
// BONUS PART
//

t_list	*ft_lstnew(void *content);
void 	ft_lstadd_front(t_list **lst, t_list *new)
int		ft_lstsize(t_list *lst)

#endif
