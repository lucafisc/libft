/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-ross <lde-ross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 10:46:07 by lde-ross          #+#    #+#             */
/*   Updated: 2022/12/01 16:15:20 by lde-ross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
    int i;
    int j;
    char *pt;

    i = 0;
    while (s1[i] && ft_strchr(set, s1[i]))
        i++;
    j = ft_strlen(s1);
    if (i >= j)
        return (ft_strdup(""));
    while (ft_strchr(set, s1[j - 1]))
        j--;
    pt = ft_substr(s1, i, (j - i));
    if (pt == 0)
        return (0);
    return (pt);
}