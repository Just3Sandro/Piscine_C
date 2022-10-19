/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:50:21 by smarco            #+#    #+#             */
/*   Updated: 2022/07/19 14:24:16 by smarco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	value;

	i = 0;
	value = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
		{
			if (s1[i] > s2[i])
				return (1);
			if (s2[i] > s1[i])
				return (-1);
			return (value);
		}
	}
	value = s1[i] - s2[i];
	return (value);
}
/*
int main()
{
	char str1[] = "abcd";
	char str2[] = "abCd";
	char str3[] = "abcd";
	char str4[] = "abc";
	char str5[] = "abcde";
	int result;

	result = ft_strcmp(str1, str2);
	printf("check 1 : %d\n", result);

	result = ft_strcmp(str2, str1);
	printf("check 6 : %d\n", result);

	result = ft_strcmp(str1, str3);
	printf("check 2 : %d\n", result);
	
	result = ft_strcmp(str1, str4);
	printf("check 3 : %d\n", result);

	result = ft_strcmp(str1, str5);
	printf("check 4 : %d\n", result);
}*/
