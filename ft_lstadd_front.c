#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    new->next = *lst;
    *lst = new;
}



    // t_list *pt;
    // pt = *lst;
    // new->next = pt;
    // *lst = new;