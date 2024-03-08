#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str) 
{
	int	i;

	i = 0;
	while (str[i] != '\0') // means if the string isnt null then keep counting //
		i++; // add another one to the count //
	return (i); // return the final count when the loop stops //
}

// int	main(void)
// {
// 	char	str[] = "ayman";

// 	printf("%d\n", ft_strlen(str));
// }
