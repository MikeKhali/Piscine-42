/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kouattar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:14:16 by kouattar          #+#    #+#             */
/*   Updated: 2022/02/17 21:43:26 by kouattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(char *str)
{
	int	n;
	int	sign;
	int	m;

	m = 0;
	n = 0;
	sign = 1;
	while ((str[n] >= 9 && str[n] <= 13) || str[n] == 32)
		n++;
	while (str[n] == '+' || str[n] == '-')
	{
		if (str[n] == '-')
			sign *= -1;
		n++;
	}
	while (str[n] >= '0' && str[n] <= '9')
	{
		m = m * 10 + (str[n] - '0');
		n++;
	}
	return (m * sign);
}
/*#include <stdio.h>
#include <stdlib.h>
int		main(void)
{
	char s1[] = "----+++--57566fefghv";
	char s2[] = "ajjjd1222dcn-";
	char s3[] = "---++--575  66fefghv";
	printf("%d : %d\n",ft_atoi(s1),atoi(s1));
	printf("%d : %d\n",ft_atoi(s2),atoi(s2));
	printf("%d: %d\n",ft_atoi(s3),atoi(s3));
	
}*/
