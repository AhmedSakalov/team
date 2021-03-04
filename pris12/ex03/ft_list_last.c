/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 19:41:35 by wdaly             #+#    #+#             */
/*   Updated: 2021/03/04 19:41:45 by wdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_last(t_list *begin_list)
{
	t_list	*elem;

	elem = begin_list;
	if (elem)
	{
		while (elem->next)
		{
			elem = elem->next;
		}
		return (elem);
	}
	return (NULL);
}
