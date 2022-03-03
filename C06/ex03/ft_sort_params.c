/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kouattar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 17:55:06 by kouattar          #+#    #+#             */
/*   Updated: 2022/02/20 02:18:08 by kouattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	affiche_main(int argc, char **argv)

{
	int	i;
	int	j;

	i = 1;
	if (argc < 2)
		return (0);
	while (argv[i])
	{	
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

int	main(int argc, char **argv)
{
	int	u;
	int	v;
	int	w;	

	u = 1;
	while (u < argc)
	{
		v = u + 1;
		while (v < argc)
		{
			w = 0;
			while (argv[u][w] == argv[v][w])
				w++;
			if (argv[u][w] > argv[v][w])
				ft_swap(&argv[u], &argv[v]);
			v++;
		}
		u++;
	}
	affiche_main (argc, argv);
	return (0);
}
