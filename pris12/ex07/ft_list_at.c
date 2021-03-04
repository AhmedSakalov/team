/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 19:55:54 by wdaly             #+#    #+#             */
/*   Updated: 2021/03/04 19:55:56 by wdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	int		i;

	i = 0;
	while (begin_list)
	{
		if (i == nbr)
		{
			return (begin_list);
		}
		begin_list = begin_list->next;
		i++;
	}
	return (0);
}
