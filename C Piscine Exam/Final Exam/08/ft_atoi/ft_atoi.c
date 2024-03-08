# include <limits.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>


int		ft_atoi(const char *str)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	
	
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	
	
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * sign);
}

// int main(void)
// {
// 	char	*s = "   +012345067ab567";

// 	printf("%d", ft_atoi(s));
// }

int	main(void)
{
	char t[] = "    -4552112394348045";
	char s[] = "    -4552112394348045";
	int res = ft_atoi(t);
	int ress = atoi(s);

	printf("%d\n", res);
	printf("%d\n", ress);
}