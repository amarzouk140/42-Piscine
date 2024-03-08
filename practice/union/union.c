#include <unistd.h>

int	ft_doubles(char *str, char c, int p)
{
	int i = 0;

	while(i < p)
	{
		if(str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int main(int ac, char **av)
{
	int i;
	int y;
	int z;

	i = 0;
	y = 0;
	z = 0;

	if(ac == 3)
	{
		while(av[1][i] != '\0')
			i++;
		
		while(av[2][y] != '\0')
		{
			av[1][i] = av[2][y];
			i++;
			y++;
		}
i--;
		while(z <= i)
		{
			if(ft_doubles(av[1],av[1][z], z) == 1)
				write(1, &av[1][z], 1);
			z++;
		}

	}
	write(1, "\n", 1);
}
