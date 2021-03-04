/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 19:57:40 by wdaly             #+#    #+#             */
/*   Updated: 2021/03/04 19:57:42 by wdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_reverse(t_list **begin_list)
{
	t_list	*elem1;
	t_list	*elem2;

	elem1 = NULL;
	while (*begin_list)
	{
		elem2 = *begin_list->next;
		*begin_list->next = elem1;
		elem1 = *begin_list;
		*begin_list = elem2;
	}
	*begin_list = elem1;
}
