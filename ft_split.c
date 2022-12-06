/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-ross <lde-ross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 10:46:28 by lde-ross          #+#    #+#             */
/*   Updated: 2022/12/01 16:09:29 by lde-ross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int j;
	int	i;
	int len;
	char **pt;
	j = 1;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			j++;
		i++;
	}
	len = ft_strlen(s);
	pt = malloc(sizeof(char *) * j);
	if (!pt)
		return (0);
	j--;
	while (j >= 0)
	{
		pt[j] = malloc(sizeof(char) * len);
		if (!pt[j])
		return (0);
		j--;	
	}
	return ((char **)s);
}