/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 19:39:55 by wdaly             #+#    #+#             */
/*   Updated: 2021/03/04 19:39:57 by wdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int			ft_list_size(t_list *begin_list)
{
	t_list	*elem;
	int		i;

	i = 0;
	elem = begin_list;
	while (elem)
	{
		i++;
		elem = elem->next;
	}
	return (i);
}
