/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kouattar <kouattar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 21:46:38 by kouattar          #+#    #+#             */
/*   Updated: 2022/02/24 16:34:05 by kouattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include<stdio.h>

int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	is_a_word(char *str, char *charset)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		while (is_charset(str[i], charset) == 1 && str[i] != '\0')
			i++;
		if (is_charset(str[i], charset) == 0 && str[i] != '\0')
		{
			while (is_charset(str[i], charset) == 0 && str[i] != '\0')
				i++;
			word++;
		}
	}
	return (word);
}

char	**ft_malloc(char *str, char *charset, char **tab)
{
	int	i;
	int	lettre;
	int	k;

	i = 0;
	k = 0;
	lettre = 0;
	while (str[i] != '\0')
	{
		while (is_charset(str[i], charset) == 1 && str[i])
			i++;
		if (is_charset(str[i], charset) == 0 && str[i])
		{
			lettre = 0;
			while (is_charset(str[i], charset) == 0 && str[i])
			{
				i++;
				lettre++;
			}
			tab[k] = malloc(sizeof(char) * (lettre + 1));
			k++;
		}
	}
	return (tab);
}

char	**put_in_tab(char *str, char *charset, char **tab)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i])
	{
		while (is_charset(str[i], charset) == 1 && str[i])
			i++;
		if (is_charset(str[i], charset) == 0 && str[i])
		{
			j = 0;
			while (is_charset(str[i], charset) == 0 && str[i])
			{
				tab[k][j] = str[i];
				i++;
				j++;
			}
			tab[k][j] = '\0';
			k++;
		}
	}
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	int		word;
	char	**tab;

	if (charset == NULL || str == NULL)
		return (NULL);
	word = is_a_word(str, charset);
	tab = malloc(sizeof(char *) * (word + 1));
	if (tab == NULL)
		return (NULL);
	tab = ft_malloc(str, charset, tab);
	tab = put_in_tab(str, charset, tab);
	tab[word] = NULL;
	return (tab);
}
