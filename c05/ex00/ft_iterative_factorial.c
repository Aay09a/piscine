/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahussein <Ayooba3453@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 13:49:07 by ahussein          #+#    #+#             */
/*   Updated: 2022/06/07 13:50:03 by ahussein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	n;

	n = nb;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	while (nb > 1)
	{	
		n = n * (nb - 1);
		nb--;
	}
	return (n);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d\n",ft_iterative_factorial(4));
}*/
