#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include <string.h>

int main(){

	
	// memcmp
	//char *s = "siiiii";
	//char *p = "siiiii";
	int k[4] = {15, 43, 1};
	int j[4] = {5, 4, 1};

	printf("mem cmp => %d \n", ft_memcmp(k, j, 3 * sizeof(int)));
	printf("mem cmp => %d \n", memcmp(k, j, 3 * sizeof(int)));
	printf("mem cmp => %d \n", memcmp(k, j, 3 * sizeof(int)));

	printf("mem cmp => %d \n", ft_memcmp("aiii", "zooo", 4));
	printf("mem cmp => %d \n", memcmp("aiii", "zooo", 4));
	printf("mem cmp => %d \n", memcmp("aiii", "zooo", 4));
	
	// memchr
	/*
	printf("mem found this char => %s \n", ft_memchr("worst behavior", 's', 50));
	printf("mem found this char => %s \n", memchr("worst behavior", 's', 50));
	*/

	// strrchr
	/*
	printf("find last char => %s \n", ft_strrchr("Hello world", 'o'));
	printf("find last char => %s \n", ft_strrchr("Hello world", 'l'));
	printf("find last char => %s \n", ft_strrchr("Hello world", 'z'));
	printf("find last char => %s \n", ft_strrchr("Hello world", 'p'));
	*/
	// strchr
	/*
	printf("find char => %s \n", ft_strchr("hello world", 'p'));
	printf("find char => %s \n", ft_strchr("hello world", 'e'));
	*/
	// tolower
	/*
	printf("c => %c \n", ft_tolower('c'));
	printf("c => %c \n", ft_tolower('a'));
	printf("c => %c \n", ft_tolower('S'));
	printf("c => %c \n", ft_tolower('5'));
*/	

	// toupper 
	/*
	printf("c => %c \n", ft_toupper('c'));
	printf("c => %c \n", ft_toupper('a'));
	printf("c => %c \n", ft_toupper('S'));
	printf("c => %c \n", ft_toupper('5'));
	*/

	// strlcat
	/*
	char s[10] = "common";
	char d_na[20] = "hello ";
	char d_og[20] = "hello ";
	ft_strlcat(d_na, s, 20);
	strlcat(d_og, s, 20);
	printf("d og => %s \n", d_og);
	printf("d na => %s \n", d_na);
	*/

	// stlcpy
	/*
	char s[14] = "treesandgutars";
	char *d_na = (char *)malloc(14 * sizeof(char));
	char *d_og = (char *)malloc(14 * sizeof(char));
	ft_strlcpy(d_na, s, 4);
	strlcpy(d_og, s, 4);
	printf("after cpy og d => %s \n", d_og);
	printf("after cpy na d => %s \n", d_na);
	*/
	
	//void	*ft_memcpy(void *restrict dst, void *restrict src, unsigned int n)
	//char *p = (char *)malloc(40 * sizeof(char));
	//char s[40] = "0123456789abcdefghijklmnop"; 
	
	//char s[6] = "abcabc";
	//char *d = (char *)malloc(6 * sizeof(char));
	//printf("src => %s \n", s) ;
	//printf("d => %s \n", d) ;
	//ft_memcpy(d, s, 1);
	//printf("after memcpy d => %s \n", d) ;
		
	//printf("s => %s", ft_memset(s, '.', 3));

	//char *r = (char *)ft_memcpy(p, s, 6);
	//printf("s is now %s", p);
	return 0;
}
