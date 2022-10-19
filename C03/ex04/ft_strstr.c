/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 20:18:19 by smarco            #+#    #+#             */
/*   Updated: 2022/07/19 14:51:58 by smarco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[y])
			y++;
		else
			y = 0;
		if (to_find[y] == '\0')
		{
			i = i - y + 1;
			return (str + i);
		}
		i++;
	}
	return (0);
}
/*
int	main()
{
	char	str[] = "Use your brain and heart";
	char	to_find[] = "ur";
	printf("%s", ft_strstr(str, to_find));
   return (0);	
}*/
