/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kouattar <kouattar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 22:06:52 by kouattar          #+#    #+#             */
/*   Updated: 2022/02/17 19:17:42 by kouattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	verife(char *base)
{
	int		n;
	int		m;

	n = 0;
	m = 1;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[n])
	{
		if (base[n] == '+' || base[n] == '-')
			return (0);
		while (base[m])
		{
			if (base[n] == base[m] && n != m)
				return (0);
			m++;
		}
		n++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long long	x;
	int			c;

	x = nbr;
	if (verife(base) == 1)
	{
		if (x < 0)
		{
			write (1, "-", 1);
			x *= -1;
		}
		if (x < ft_strlen(base))
			write(1, &base[nbr], 1);
		if (x >= ft_strlen(base))
		{
			ft_putnbr_base(x / ft_strlen(base), base);
			c = x % ft_strlen(base);
			write(1, &base[c], 1);
		}
	}
	if (verife(base) == 0)
		return ;
}
/*#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);

int		main(void)
{
	write(1, "42:", 3);
	ft_putnbr_base(42, "0123456789");
	write(1, "\n2a:", 4);
	ft_putnbr_base(42, "0123456789abcdef");
	write(1, "\n-2a:", 5);
	ft_putnbr_base(-42, "0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "");
	write(1, "\n:", 2);
	ft_putnbr_base(12, "poneyvif");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "+-0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "\t0123456789abcdef");
}*/
