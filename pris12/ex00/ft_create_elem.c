/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 19:23:24 by wdaly             #+#    #+#             */
/*   Updated: 2021/03/04 19:23:30 by wdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list		*ft_create_elem(void *data)
{
	t_list	*elem;

	elem = NULL;
	elem = malloc(sizeof(*elem));
	if (elem)
	{
		elem->data = data;
		elem->next = NULL;
	}
	return (elem);
}
