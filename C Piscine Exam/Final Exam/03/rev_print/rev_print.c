#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;
	i = 0; // parameter to run the loop and count the length 
	while (str[i] != '\0')
		i++;
	return (i); // return is int because the function is counting the length
}

char *ft_rev_print(char *str)
{
	int x;
	x = ft_strlen(str); // means that x = whatever the count in the length function 
	while (x >= 0) 
	{
		write(1, &str[x], 1); // means print the string letter in the count from the last till the begining 
		x--; // -- to print reverse 
	}
	return (str); // the return is string because we want the function to print a string
}

int	main(void)
{
	char str[] = "namtab";
		ft_rev_print(str);
}
