#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_list = 0;
	t_list *current = 0;

	if (!lst || !f || !del)
		return (0);

	//new_list = ft_lstnew(f(lst->content));
	//if (!new_list)
	//	return (0);
	//current = new_list;
	//lst = lst->next;
	/*while (lst)
	{
		current->next = ft_lstnew(f(lst->content));
		if (!current->next)
		{
			ft_lstclear(&new_list, del);
			return (0);
		}
		current = current->next;
		lst = lst->next;
	}
	current->next = NULL;
	return (new_list);*/
	while (lst)
	{
		t_list *new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (0);
		}
		if (!current)
			new_list = new_node;
		else
			current->next = new_node;
		
		current = new_node;
		lst = lst->next;
	}
	return (new_list);
	
}
