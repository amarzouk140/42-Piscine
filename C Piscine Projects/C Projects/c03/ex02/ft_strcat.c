/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:41:07 by amarzouk          #+#    #+#             */
/*   Updated: 2023/09/17 15:38:07 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	a;
	int	y;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	y = 0;
	while (src[y] != '\0')
	{
		dest[a + y] = src[y];
		y++;
	}
	dest[a + y] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char src[] = "world";
// 	char dest[] = "hello ";

// 	printf("%s", ft_strcat(dest, src));
// 	return (0);
// }
