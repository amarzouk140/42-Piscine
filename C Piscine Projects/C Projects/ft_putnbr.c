/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 18:12:07 by amarzouk          #+#    #+#             */
/*   Updated: 2023/09/19 11:36:25 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648); // relunching the function with the new number 
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10); // the remaining of the divide function 
	}
	else
		ft_putchar(nb + 48); // adding 48 to print the number actual value in ascii 
}

int	main(void)
{
	ft_putnbr(2147483647);
}

// Maximum Integer Value: 2147483647 and Minimum Integer Value: -2147483648
