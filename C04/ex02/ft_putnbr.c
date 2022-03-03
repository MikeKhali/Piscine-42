/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kouattar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 23:56:12 by kouattar          #+#    #+#             */
/*   Updated: 2022/02/17 19:16:07 by kouattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{	
	long long int	x;
	char			c;

	x = nb ;
	if (x < 0)
	{
		write (1, "-", 1);
		x *= -1;
	}	
	if (x > 9)
		ft_putnbr (x / 10);
	c = '0' + (x % 10);
	write (1, &c, 1);
}
/*#include <stdio.h>

int		main()
{
	ft_putnbr(42);
	printf("\n");
	ft_putnbr(-42);
	printf("\n");
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(2147483647);
	printf("\n");
}*/
