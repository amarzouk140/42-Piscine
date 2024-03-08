#include <unistd.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 2) // for the argument count 
	{
		while (av[1][i] == ' ' || av[1][i] == '\t') // if there is space or tab just continue the loop 
			i++;
		while (av[1][i] != '\0' && av[1][i] != ' ' && av[1][i] != '\t') // if the string isnt equall to null, space or tab
		{
			write(1, &av[1][i], 1); // print the string 1.
			i++;
		}
	}
	write(1, "\n", 1); // else if string 
	return (0);
}
