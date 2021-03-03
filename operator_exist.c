/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator_exist.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpepperc <bpepperc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 15:01:57 by bpepperc          #+#    #+#             */
/*   Updated: 2021/03/03 17:09:40 by bpepperc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

operator_exist(char operator);
{
	int i
	
	i = 0;
	char operator[5] = {'+', '-', '*', '/', '%'}
	while (i < 5)
	{
		if (operator == operator[i])
			return (operator);
		i++;
	}
	write (1, "0/n", 2);
	return (0);
}
	
