/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kouattar <kouattar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:17:57 by kouattar          #+#    #+#             */
/*   Updated: 2022/02/07 20:11:36 by kouattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(int n)
{
	ft_putchar('0' + n / 10);
	ft_putchar('0' + n % 10);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 100)
	{
		b = a + 1;
		while (b < 100)
		{
			ft_print_number(a);
			ft_putchar(' ');
			ft_print_number(b);
			if (a != 98)
			{	
				ft_putchar(',');
				ft_putchar(' ');
			}	
			b++;
		}	
		a++;
	}
}


int main()
{
	ft_print_comb2();
	return 0;
}