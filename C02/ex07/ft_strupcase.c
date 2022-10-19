/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 16:11:20 by smarco            #+#    #+#             */
/*   Updated: 2022/07/14 21:30:17 by smarco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			str[i] = str[i] -32;
		}
		i++;
	}
	return (str);
}
/*
int	main()
{
	char str[] = "hello world";

	ft_str_is_alpha(str);
	printf("%s", str);
	return (0);
}*/
