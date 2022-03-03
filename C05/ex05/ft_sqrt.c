/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kouattar <kouattar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 03:06:27 by kouattar          #+#    #+#             */
/*   Updated: 2022/02/22 00:45:24 by kouattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	n;

	n = 0;
	while (n <= 46340)
	{
		if (nb == n * n)
			return (n);
		n++;
	}
	return (0);
}

/*#include <stdio.h>

int ft_sqrt(int nb);

int	main(void)
{
	printf("10:%d\n", ft_sqrt(-0));
	printf("6:%d\n", ft_sqrt(36));
	printf("0:%d\n", ft_sqrt(37));
	printf("100:%d\n", ft_sqrt(10000));
	printf("0:%d\n", ft_sqrt(10001));
	printf("2000:%d\n", ft_sqrt(2147395600));
	printf("0:%d\n", ft_sqrt(-36));
}*/
