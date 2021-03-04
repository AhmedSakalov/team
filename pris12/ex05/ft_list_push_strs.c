/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 19:51:26 by wdaly             #+#    #+#             */
/*   Updated: 2021/03/04 19:51:28 by wdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list		*ft_list_push_strs(int size, char **strs)
{
	t_list	*elem1;
	t_list	*elem2;
	int		i;

	i = 0;
	if (size <= 0)
	{
		return (0);
	}
	elem1 = ft_create_elem(*strs[0]);
	while (++i < size)
	{
		elem2 = ft_create_elem(*strs[i]);
		elem2->next = elem1;
		elem1 = elem2;
	}
	return (elem1);
}
