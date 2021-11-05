#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void	del(void	*content)
{
	printf("content => %s \n", (char *)content);
}

void	show_linkedlist(t_list *HEAD)
{
	t_list	*p;
	if(!HEAD)
		printf("Empty linked list ! \n");
	p = HEAD;
	while (p->next)
	{
		printf("[%s]->", (char *)p->content);
		p = p->next;
	}
	if(p->content)
		printf("[%s]\n", (char *)p->content);
}

int main()
{
	
	t_list *p = 0;	
	t_list *t = 0;
	
	void (*dd)(void *);
	dd = &del;

	t_list *HEAD = ft_lstnew("node 1");
	HEAD->next = ft_lstnew("node 2");
	HEAD->next->next = ft_lstnew("node 3");
	
	t = ft_lstnew("node 99");
	ft_lstadd_front(&HEAD, t);
	
	ft_lstadd_back(&HEAD, ft_lstnew("node -1"));

	show_linkedlist(HEAD);

	ft_lstclear(&HEAD, del);	
	
	ft_lstadd_front(&HEAD, t);
	
	//printf("HEAD content => %s \n", (char *)HEAD->content);
	
	HEAD = NULL;	
	show_linkedlist(HEAD);
	
	/*	
	t_list *l = ft_lstlast(p); 
	printf("last element in linked list => %s\n", (char *)l->content);
	return (1);*/
}

