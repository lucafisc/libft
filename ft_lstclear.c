/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-ross <lde-ross@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 19:51:21 by lde-ross          #+#    #+#             */
/*   Updated: 2022/12/08 09:53:17 by lde-ross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*my_list;
	t_list	*tmp;

	my_list = *lst;
	while (my_list->next)
	{
		tmp = my_list->next;
		ft_lstdelone(my_list, del);
		my_list = tmp;
	}
	ft_lstdelone(my_list, del);
	*lst = (0);
}
