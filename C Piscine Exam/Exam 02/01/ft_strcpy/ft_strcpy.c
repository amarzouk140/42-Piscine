#include <unistd.h>
#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
	int i;
	i = 0;

	while (src[i] != '\0')
	{
		dest [i] = src[i];
		i++;
	}
	dest [i] = src[i];
	return (dest);
}

int	main(void)
{
char	dest[] = "batman";
char	src[] = "superman";

printf("%s\n", dest);
ft_strcpy(dest, src);
printf("%s\n", dest);
}
