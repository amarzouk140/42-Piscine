#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp; // temp container used to swap the values //

	tmp = *a; // means temp = whats inside the pointer a 
	*a = *b; // means the value of pointer a has been changed now 
	*b = tmp; // means the value of pointer b 
}

int	main(void)
{
	int	n = 42;
	int	n2 = 140;

	printf("before \n%d \n%d\n", n, n2);
	ft_swap(&n, &n2);
	printf("after \n%d \n%d\n", n, n2);
}
