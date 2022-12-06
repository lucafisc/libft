#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    del(lst->content);
    free(lst);
}


// Takes as a parameter a node and frees the memory of
// the node’s content using the function ’del’ given
// as a parameter and free the node.  The memory of
// ’next’ must not be freed.