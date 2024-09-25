#include "libft.h"

void *ft_malloc(size_t size, t_list **list)
{
    void    *cont;
    t_list  *tmp;

    cont = malloc(size);
    if (!cont)
        return (NULL);
    tmp = ft_lstnew(cont);
    if (!tmp)
    {
        free(cont);
        return (NULL);
    }
    ft_lstadd_back(list, tmp);
    return (cont);
}

void add_to_list(void *cont, t_list **list)
{
    t_list  *tmp;

    if (!cont)
        return ;
    tmp = ft_lstnew(cont);
    if (!tmp)
    {
        // free(cont);      //
        return ;
    }
    if (!list)
        *list = tmp;
    else
        ft_lstadd_back(list, tmp);
}

void	ft_lst_clear(t_list **lst)
{
	t_list	*curr1;
	t_list	*curr2;

	if (lst == NULL || *lst == NULL)
		return ;
	curr1 = *lst;
	while (curr1->next != NULL)
	{
		curr2 = curr1->next;
        free(curr1->content);
        free(curr1);
		curr1 = curr2;
	}
    free(curr1->content);
    free(curr1);
	*lst = NULL;
}
