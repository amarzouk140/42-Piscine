/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:51:32 by amarzouk          #+#    #+#             */
/*   Updated: 2023/09/17 15:38:16 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (*s1 && *s2 && i < n)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		++s1;
		++s2;
		++i;
	}
	if (i == n)
	{
		--s1;
		--s2;
	}
	return (*s1 - *s2);
}

// int	main(void)
// {
// 	printf("%d\n", ft_strncmp("ayman", "aywoman", 7)); 
// 	printf("%d\n", ft_strncmp("hello", "hellpo", 6)); 
// 	printf("%d\n", ft_strncmp("test", "test", 4)); 
// 	printf("%d\n", ft_strncmp("", "ayman", 5)); 
// 	printf("%d\n", ft_strncmp("", "", 3)); 
// }
