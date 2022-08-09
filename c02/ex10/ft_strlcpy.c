/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahussein <Ayooba3453@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:48:21 by ahussein          #+#    #+#             */
/*   Updated: 2022/05/29 17:11:34 by ahussein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	r;

	r = 0;
	while (src[r] != '\0')
	{
		r++;
	}
	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (r);
}
/*
int	main(void)
{
	char	*src;
	char	dest[50];
	int		size;

	size = 5;
	src = "hlelo world how are you";
	printf("%d\n", ft_strlcpy(dest, src, size));
	printf("%s\n", dest);
}*/
