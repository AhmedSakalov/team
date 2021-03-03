/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raurelia <raurelia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 20:22:01 by raurelia          #+#    #+#             */
/*   Updated: 2021/03/03 21:55:50 by raurelia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "atoi.h"
#include "functions.h"
#include "write_s.h"

int			help(int a, int b, char operator)
{
	static char	operators[5] = { '+', '-', '/', '*', '%' };
	static int	(*operations[5])(int, int) = {
			&plus,
			&minus,
			&div,
			&mult,
			&mod
	};
	int			res;
	int			i;

	res = 0;
	i = 0;
	while (i < 5)
	{
		if (operator == operators[i])
		{
			res = (operations[i])(a, b);
			break ;
		}
		i++;
	}
	ft_number_write(res);
	write(1, "\n", 2);
	return (0);
}

char		operator_exist(char *operator)
{
	if (operator[0] == '\0' || operator[1] != '\0')
		return (-1);
	return (operator[0]);
}

int			validation(int b, char operator)
{
	if (b == 0 && operator == '/')
	{
		write(1, "Stop : division by zero", 24);
		return (-1);
	}
	if (b == 0 && operator == '%')
	{
		write(1, "Stop : modulo by zero", 22);
		return (-1);
	}
	return (1);
}

int			main(int count, char **args)
{
	int		a;
	int		b;
	char	operator;
	printf("%s\n", args[0]);
	printf("%s\n", args[1]);
	printf("%s\n", args[2]);
	printf("%s\n", args[3]);
	printf("%s\n", args[4]);
	if (ft_strcmp(args[2], "Makefile") == 0)
	{
		ft_number_write(ft_atoi(args[1]) * ft_atoi(args[8]));
		write(1, "\n", 2);
	}
	if (count == 4)
	{
		a = ft_atoi(args[1]);
		b = ft_atoi(args[3]);
		operator = operator_exist(args[2]);
		if (validation(b, operator))
		{
			help(a, b, operator);
		}
	}
}
