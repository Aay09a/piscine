/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahussein <Ayooba3453@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 13:58:56 by ahussein          #+#    #+#             */
/*   Updated: 2022/05/31 14:00:48 by ahussein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	n;
	int	i;

	n = 1;
	while (n < ac)
	{
		i = 0;
		while (av[n][i])
		{
			write(1, &av[n][i], 1);
			i++;
		}
		n++;
		write(1, "\n", 1);
	}
	return (0);
}
