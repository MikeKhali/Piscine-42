/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kouattar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 23:09:16 by kouattar          #+#    #+#             */
/*   Updated: 2022/02/12 21:31:59 by kouattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
#include <unistd.h>

int		main()
{
	char	str0[] = "Hellobienouquoi";
	char	str1[] = "W1uddup Shawt11y";
	char c;

	c = ft_str_is_alpha(str0) + '0';
	write(1, &c, 1);
	c = ft_str_is_alpha(str1) + '0';
	write(1, &c, 1);
	return (0);
}*/
