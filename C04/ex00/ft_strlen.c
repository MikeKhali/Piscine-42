/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kouattar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:43:35 by kouattar          #+#    #+#             */
/*   Updated: 2022/02/15 21:19:16 by kouattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*#include <stdio.h>
int	main (void)
{
	char s1[] = "";
	char s2[] = "--odmmffffdds";
	printf("%d\n", ft_strlen(s1));
	printf("%d", ft_strlen(s2));
	return (0);
	}*/
