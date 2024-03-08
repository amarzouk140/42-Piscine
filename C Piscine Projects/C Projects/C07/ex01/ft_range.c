/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 20:38:09 by amarzouk          #+#    #+#             */
/*   Updated: 2023/09/24 22:43:03 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	tab = (int *) malloc (sizeof(*tab) * (max - min));
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}

// int	main(void)
// {
// 	int	min;
// 	int	max;
// 	int	*tab;
// 	int	i = 0;
// 	int	size;

// 	min = 5;
// 	max = 10;
// 	size = max - min;
// 	tab = ft_range(min, max);
// 	while (i < size)
// 	{
// 		printf("%d, ", tab[i]);
// 		i++;
// 	}
// }
