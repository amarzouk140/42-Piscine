/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 18:53:02 by amarzouk          #+#    #+#             */
/*   Updated: 2023/09/24 18:58:32 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	index;
	long	b;

	b = nb;
	if (b <= 0)
	{
		return (0);
	}
	if (b == 1)
	{
		return (1);
	}
	index = 2;
	if (b >= 2)
	{
		while (index * index <= b)
		{
			if (index * index == b)
			{
				return (index);
			}
			index++;
		}
	}
	return (0);
}

// int main(void)
// {
// 	printf("sqrt of %d is %d\n", -2282, ft_sqrt(-2282));
// 	printf("sqrt of %d is %d\n", 0, ft_sqrt(0));
// 	printf("sqrt of %d is %d\n", 1, ft_sqrt(1));
// 	printf("sqrt of %d is %d\n", 2, ft_sqrt(2));
// 	printf("sqrt of %d is %d\n", 1640045925, ft_sqrt(1640045925));
// 	printf("sqrt of %d is %d\n", 2147395600, ft_sqrt(2147395600));
//     return (0);
// }
