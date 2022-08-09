/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahussein <Ayooba3453@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:48:24 by ahussein          #+#    #+#             */
/*   Updated: 2022/05/20 14:09:00 by ahussein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printc(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = -1;
	while (++x <= 98)
	{
		y = x;
		while (++y <= 99)
		{
			ft_printc((char)(x / 10 + '0'));
			ft_printc((char)(x % 10 + '0'));
			ft_printc(' ');
			ft_printc((char)(y / 10 + '0'));
			ft_printc((char)(y % 10 + '0'));
			if (x != 98)
			{
				ft_printc(',');
				ft_printc(' ');
			}
		}
	}
}
/*
int	main(void)
{
	ft_print_comb2();
}*/
