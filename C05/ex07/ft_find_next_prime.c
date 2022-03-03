/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kouattar <kouattar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 03:53:55 by kouattar          #+#    #+#             */
/*   Updated: 2022/02/22 00:45:31 by kouattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	n;

	n = 2;
	if (nb <= 1)
		return (0);
	while (n <= (nb / n))
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb - 1;
	if (nb < 2)
		return (2);
	while (i)
	{
		i++;
		if (i % 2 != 0 || i % 3 != 0)
		{
			if (ft_is_prime(i) == 1)
				return (i);
		}
	}
	return (i);
}
