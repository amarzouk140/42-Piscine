/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:14:24 by amarzouk          #+#    #+#             */
/*   Updated: 2023/09/18 10:58:09 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}

// int	main(void)
// {
// 	printf("%d\n", ft_strcmp("ayman", "Ayman")); 
// 	printf("%d\n", ft_strcmp("Hello", "hello")); 
// 	printf("%d\n", ft_strcmp("test", "test")); 
// 	printf("%d\n", ft_strcmp("hey", "he")); 
// 	printf("%d\n", ft_strcmp("", "")); 
// }
