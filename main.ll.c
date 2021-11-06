
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"
#include <string.h>

void	del(void *content)
{
	char *s;

	s = (char *)content;
	strcpy(s, "xxxx");
	printf("content %s \n", (char *)content);
	//printf("content from delete => %s \n", (char *)content);
	//free(content);
}
void	*fp(void *content)
{
	void *s;
	
	s = ft_strjoin((char *)content, "xyz");
	return (s);
}

char *createcontent(char *s)
{
	char *r;
	int len = (int)strlen(s) + 1; 	
	r = (char *)malloc((len) * sizeof(char));
	strlcpy(r, s, len);
	return (r);
}

void	show_linkedlist(t_list *HEAD)
{
	t_list	*p;
	
	p = HEAD;
	while (p)
	{
		printf("[%s]->", (char *)p->content);
		p = p->next;
	}
}

int main()
{

	t_list	*HEAD;
	void	(*d)(void *);

	d = &del;
	HEAD = ft_lstnew(createcontent("node 1"));
	ft_lstadd_back(&HEAD, ft_lstnew(createcontent("node 2")));
	ft_lstadd_back(&HEAD, ft_lstnew(createcontent("node 3")));
	ft_lstadd_back(&HEAD, ft_lstnew(createcontent("node 4")));
	ft_lstadd_back(&HEAD, ft_lstnew(createcontent("node 5")));
	ft_lstadd_back(&HEAD, ft_lstnew(createcontent("node 6")));
	
	show_linkedlist(HEAD);
	
	t_list *r = ft_lstmap(HEAD, &fp, d);
	//ft_lstclear(&HEAD, d);
	//ft_lstiter(HEAD, d);
	printf("\n");
	show_linkedlist(r);
	
	return (0);
}
