#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *pt;
    pt = malloc(sizeof(t_list));
    pt->content = content;
    pt->next = 0;
    return (pt);
}

