
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"
#include <string.h>

void	del(void *content)
{
	//printf("content from delete => %s \n", (char *)content);
	free(content);
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

	ft_lstclear(&HEAD, d);

	show_linkedlist(HEAD);
	
	return (0);
}
