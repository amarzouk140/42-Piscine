#include <unistd.h>

int		main(int ac, char **av)
{
	(void)ac; // calling the argument but using void because there is no need to use it //
	(void)av;
	write(1, "z\n", 2);
}
