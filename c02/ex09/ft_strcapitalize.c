/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahussein <Ayooba3453@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:46:30 by ahussein          #+#    #+#             */
/*   Updated: 2022/05/29 14:26:21 by ahussein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	p;

	i = 0;
	p = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (p == 1)
				str[i] -= 32;
			p = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			p = 0;
		else
			p = 1;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char str[] = "hello my freind how are you ?";
	printf("%s", ft_strcapitalize(str));
}*/
