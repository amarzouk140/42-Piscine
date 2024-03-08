/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 18:18:34 by amarzouk          #+#    #+#             */
/*   Updated: 2023/09/19 13:23:22 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	result;
	int	i;

	sign = 1;
	result = 0;
	i = 0;
	while ((str[i] == 32) || ((str[i] >= 9) && (str[i] <= 13)))
	{
		i++;
	}
	while ((str[i] == 43) || (str[i] == 45))
	{
		if (str[i] == 45)
		{
			sign *= -1;
		}
		i++;
	}
	while ((str[i] >= 48) && (str[i] <= 57))
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	return (result * sign);
}

// int main(void)
// {
// 	char	*s = "   ---+--+012345067ab567";

// 	printf("%d", ft_atoi(s));
// }
