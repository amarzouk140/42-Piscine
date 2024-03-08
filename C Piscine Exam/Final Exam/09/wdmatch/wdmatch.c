#include <unistd.h>

void ft_putstr(char *str)
{
    int i;
    i = 0;

    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    int i = 0;
    int y = 0;
    
    if (ac == 3)
    {
        while(av[2][y] != '\0')
        {
            if(av[1][i] == '\0')
            {
                ft_putstr(av[1]);
                write(1, "\n", 1);
                return (0);
            }
            if(av[1][i] == av[2][y])
                i++;
            y++;
        }
        if (av[1][i] == '\0')
            ft_putstr(av[1]);
    }
    write(1, "\n", 1);
}