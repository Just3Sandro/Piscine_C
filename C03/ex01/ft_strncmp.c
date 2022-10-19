/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 18:13:04 by smarco            #+#    #+#             */
/*   Updated: 2022/07/21 11:59:11 by smarco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	value;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	value = s1[i] - s2[i];
	return (value);
}
/*
int	main()
{
	char str1[] = "abcd";
	char str2[] = "abCd";
	char str3[] = "abcde";
	char str4[] = "abc";
	int result;

	result = ft_strncmp(str1, str2, -1);
	printf("check C : %d\n", result);

	result = ft_strncmp(str2, str1, 9999995);
	printf("check c : %d\n", result);

	result = ft_strncmp(str1, str3, 5);
	printf("check +1 : %d\n", result);

	result = ft_strncmp(str1, str4, 4);
	printf("check -1 : %d\n", result);

	result = ft_strncmp(str1, str1, 4);
	printf("check = : %d\n", result);
}*/
