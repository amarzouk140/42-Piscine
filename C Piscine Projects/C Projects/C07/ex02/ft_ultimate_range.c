/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 20:39:54 by amarzouk          #+#    #+#             */
/*   Updated: 2023/09/24 22:46:13 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;

	if (min >= max)
	{
		*range = (void *)0;
		return (0);
	}
	tab = (int *)malloc(sizeof(*tab) * (max - min));
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (i);
}

// int	main(void)
// {
// 	int	min;
// 	int	max;
// 	int	*tab;
// 	int	size;
// 	int	i = 0;

// 	min = 5;
// 	max = 10;
// 	size = ft_ultimate_range(&tab, min, max);
// 	while (i < size)
// 	{
// 		printf("%d, ", tab[i]);
// 		i++;
// 	}
// }
