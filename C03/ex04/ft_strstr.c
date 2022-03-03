/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kouattar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:17:49 by kouattar          #+#    #+#             */
/*   Updated: 2022/02/15 17:02:43 by kouattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i ;
	int	j;
	int	match;

	i = 0;
	while (str[i])
	{
		match = 1;
		j = 0;
		while (to_find[j])
		{
			if (str[i + j] != to_find[j])
			{
				match = 0;
				break ;
			}
			j++;
		}
		if (match)
			return (str + i);
		i++;
	}
	return (0);
}
