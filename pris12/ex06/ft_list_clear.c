/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 19:53:39 by wdaly             #+#    #+#             */
/*   Updated: 2021/03/04 19:53:40 by wdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void		ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*elem;

	if (begin_list)
	{
		while (begin_list)
		{
			(*free_fct)(begin_list->data);
			elem = begin_list->next;
			free(begin_list);
			begin_list = elem;
		}
	}
}
