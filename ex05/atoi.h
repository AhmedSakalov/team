/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raurelia <raurelia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 21:11:56 by raurelia          #+#    #+#             */
/*   Updated: 2021/03/03 21:38:34 by raurelia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATOI_H
# define ATOI_H

int	ft_atoi(char *str)
{
	int i;
	int z;
	int x;

	z = 1;
	i = 0;
	x = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			z = z * (-1);
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		x = ((x * 10) + str[i] - '0');
		i++;
	}
	return (x * z);
}
#endif
