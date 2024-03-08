#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0; // parameter used to run the loop function //
	if (ac == 2) // for the third condition which is number of parameters should be = 2 including ./a.out //
	{
		while (av[1][i] != '\0') // means if we did not reach the end of the string or there is no argument input //
		{
			if (av[1][i] == 'a') // for first condition which is a letter //
			{
				write(1, "a\n", 2); 
				break ; // to end the loop and stop //
			}
			i++; // to continue the loop if condition did not happen //
		}
		write(1, "\n", 1); // if loop checked all the string letters and didnt find 'a' then loop will stop and excude this function //
	}
	else // if ac != 2 or there is no arguments input then excude this function //
		write(1, "a\n", 2);
	return (0);
}
