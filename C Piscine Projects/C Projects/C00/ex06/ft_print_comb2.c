/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 18:37:15 by amarzouk          #+#    #+#             */
/*   Updated: 2023/09/17 18:43:26 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_all(char a, char b, char c, char d)
{
	if (a == 9 && b == 9 && c == 9 && d == 9)
		b--;
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (a != '9' || b != '8' || c != '9' || d != '9')
		write(1, ",  ", 2);
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0' - 1;
	while (++a <= '9')
	{
		b = '0' - 1;
		while (++b <= '9')
		{
			c = '0' - 1;
			while (++c <= '9')
			{
				if (a < c)
					d = '0' - 1;
				else if (a == c)
					d = b;
				while (++d <= '9')
					ft_putchar_all(a, b, c, d);
			}
		}
	}
}

// int	main(void)
// {
// 	ft_print_comb2();
// 	return (0);
// }
