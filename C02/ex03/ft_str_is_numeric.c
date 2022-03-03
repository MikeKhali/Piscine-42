/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kouattar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 00:36:09 by kouattar          #+#    #+#             */
/*   Updated: 2022/02/12 21:30:22 by kouattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < '0' || str[i] > '9'))
			return (0);
		i++;
	}
	return (1);
}
/*#include <stdio.h>
#include <unistd.h>


int		main()
{
	char str0[] = "12589874562245654";
	char str1[] = "remember me 1t's m1ke k2li";
	char c;

	c = ft_str_is_numeric(str0) + '0';
	write(1, &c, 1);
	c = ft_str_is_numeric(str1) + '0';
	write(1, &c, 1);
	return (0);
}*/
