/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 12:06:26 by amarzouk          #+#    #+#             */
/*   Updated: 2023/09/10 15:40:50 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print(int x, char a, char b, char c)
{
	int	z;

	z = 1;
	while (z <= x)
	{
		if (z == 1)
			ft_putchar(a);
		else if (z == x)
			ft_putchar(c);
		else 
			ft_putchar(b);
		z++;
	}
	ft_putchar('\n');
}

void	ft_rush(int x, int y)
{
	int	o;

	o = 1;
	if (x >= 1 && y >= 1)
	{
		while (o <= y)
		{
			if (o == 1)
				ft_print(x, 'A', 'B', 'C');
			else if (o == y)
				ft_print(x, 'A', 'B', 'C');
			else
				ft_print(x, 'B', ' ', 'B');
			o++;
		}
	}
}
