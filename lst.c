#include "mes_main.h"

static void	supp(void *content)
{
	(void)content;
}

static void	zero(void *content)
{
	content = "0";
}

static void	un(void *content)
{
	content = "1";
}

static void	lst_print(t_list **lst)
{
	t_list	*tp;

	tp = (*lst);
	while (*lst)
	{
		printf("[%s]-", (char *)(*lst)->content);
		*lst = (*lst)->next;
	}
	printf("NULL\n\n");
	*lst = tp;
}

void	main_lst(void)
{
	t_list	*lst;
	t_list	*tp;

	printf("\nliste chainee\n");
	printf("Creer un node (content = 5)\n");
	lst = ft_lstnew("5");
	tp = lst;
	lst_print(&lst);

	printf("Inserer un node(12) au debut\n");
	ft_lstadd_front(&lst, ft_lstnew("12"));
	tp = lst;
	lst_print(&lst);

	printf("Inserer un node(15) a la fin\n");
	ft_lstadd_back(&lst, ft_lstnew("15"));
	lst = tp;
	lst_print(&lst);

	printf("Inserer un node(8) a la fin\n");
	ft_lstadd_back(&lst, ft_lstnew("8"));
	lst = tp;
	lst_print(&lst);

	printf("Inserer un node(30) a la fin\n");
	ft_lstadd_back(&lst, ft_lstnew("30"));
	lst = tp;
	lst_print(&lst);

	printf("Supprimer la chaine (clear)\n");
	void (*del)(void *);
	del = &supp;
	ft_lstclear(&lst, (*del));
	lst_print(&lst);

	printf("Creer une nouvelle chaine de 10 elements\n");
	int	i = -1;
	char *nbr;
	lst = ft_lstnew("1");
	tp = lst;
	while (++i < 10)
	{
		nbr = ft_itoa((int)(rand() / 100000));
		lst->next = ft_lstnew(((void *)nbr));
		lst = lst->next;
	}
	lst = tp;
	lst_print(&lst);
/*
	printf("Passer le contenu de tous les elements de la chaine a 0\n");
	void (*f)(void);
	f = &zero;
	while (lst->next)
		ft_lstiter(&lst->content, (*f));
	lst = tp;
	lst_print(&lst);

	printf("Passer le contenu de tous les elements de la chaine a 1 et creer une nouvelle liste\n");
	void *(*f)(void);
	void (*del)(void *);
	f = &un;
	del = &supp;
	while (lst->next)
		ft
*/	
}
