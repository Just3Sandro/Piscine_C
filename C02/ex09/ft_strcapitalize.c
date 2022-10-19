/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 16:11:20 by smarco            #+#    #+#             */
/*   Updated: 2022/07/19 12:11:41 by smarco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	mini(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			str[i] = str[i] + 32;
		i++;
	}
	return (*str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	mini(str);
	i = 0;
	while (str[i])
	{
		if ((str[0] >= 'a') && (str[0] <= 'z'))
			str[0] = str[0] -32;
		if ((str[i] < 48) || (str[i] > 57))
		{
			if ((str[i] < 97) || (str[i] > 122))
			{
				if ((str[i] < 65) || (str[i] > 90))
				{
					if ((str[i + 1] >= 'a') && (str[i + 1] <= 'z'))
						str[i + 1] = str[i + 1] -32;
				}
			}
		}
		i++;
	}	
	return (str);
}
/*
int	main()
{
	char str[] = "sal-ut, coMment .tu _vas, 42mo=ts qua+rente.";

	ft_strcapitalize(str);
	printf("%s", str);
	return (0);
}*/
