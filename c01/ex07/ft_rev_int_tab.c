/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahussein <Ayooba3453@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 22:12:48 by ahussein          #+#    #+#             */
/*   Updated: 2022/05/28 11:33:30 by ahussein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		ri;
	int		swap;

	i = 0;
	ri = size - 1;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[ri];
		tab[ri] = swap;
		i++;
		ri--;
	}
}
/*
int main()
{
	int tab[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	ft_rev_int_tab(&tab[0], 9);
	for (int i = 0; i < 9; i++)
	{
		printf("%d ",tab[i]);
	}
}*/
