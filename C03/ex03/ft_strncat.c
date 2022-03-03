/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kouattar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 01:49:15 by kouattar          #+#    #+#             */
/*   Updated: 2022/02/14 14:14:57 by kouattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (nb == 0)
		return (dest);
	if (nb != 0)
	{
		while (dest[j])
			j++;
		while (src[i] && i < nb)
		{
			dest[j + i] = src[i];
			i++;
		}
	}
	dest[j + i] = '\0';
	return (dest);
}
