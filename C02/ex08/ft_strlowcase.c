/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 16:11:20 by smarco            #+#    #+#             */
/*   Updated: 2022/07/14 21:30:55 by smarco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
		{
			str[i] = str[i] +32;
		}
		i++;
	}
	return (str);
}
/*
int	main()
{
	char str[] = "HELLA WorlZD";

	ft_strlowcase(str);
	printf("%s", str);
	return (0);
}*/
