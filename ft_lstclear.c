#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *my_list;
    my_list = *lst;
    while(my_list->next)
    {
        del(my_list->content);
        free(my_list);
        my_list = my_list->next;
    }
    my_list = NULL;
}

// Deletes and frees the given node and every
// successor of that node, using the function ’del’
// and free(3).
// Finally, the pointer to the list must be set to
// NULL.