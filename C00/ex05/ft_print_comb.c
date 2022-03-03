/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kouattar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 12:00:26 by kouattar          #+#    #+#             */
/*   Updated: 2022/02/03 20:12:04 by kouattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_affiche(int a, int b, int c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 48;
	while (a <= 55)
	{
		b = a +1;
		while (b <= 56)
		{
			c = b +1;
			while (c <= 57)
			{
				ft_affiche(a, b, c);
				if (a != 55)
					write(1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}	
}
