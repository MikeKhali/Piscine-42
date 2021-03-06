/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kouattar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:13:40 by kouattar          #+#    #+#             */
/*   Updated: 2022/02/08 22:44:13 by kouattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	c;

	i = 0;
	if (size > 1)
	{
		while (i < (size / 2))
		{
			c = tab[i];
			tab[i] = tab[size - 1 - i];
			tab[size - i - 1] = c;
			i++;
		}
	}
}
