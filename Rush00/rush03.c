/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kouattar <kouattar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 21:36:28 by kouattar          #+#    #+#             */
/*   Updated: 2022/02/06 23:58:06 by kouattar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putchar(char c);

void    rush(int c, int l)
{
    if(c == 1 && l == 1)
        ft_putchar('A');
    else if(c == 1 && l > 1)
    {
        ft_putchar('A');
        while (l - 2 > 0)
        {
            ft_putchar('\n');
            ft_putchar('B');
            l--;
        }
        ft_putchar('\n');
        ft_putchar('A');
    }
    else if (c > 1 && l ==1)
    {
        ft_putchar('A');
        while(c - 2 > 0)
        {
            ft_putchar('B');
            c--;
        }
    ft_putchar('C');
    }
    else if (c > 1 && l > 1)
    {
        ft_putchar('B');
        while(c - 2 > 0)
        {
            write(1, " ", 1);
            c--;
        }
        ft_putchar('B');

    }
}
