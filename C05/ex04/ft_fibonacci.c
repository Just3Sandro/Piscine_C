/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 15:40:54 by smarco            #+#    #+#             */
/*   Updated: 2022/07/28 15:30:21 by smarco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	nb;

	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	else if (index <= 2)
	{
		return (1);
	}
	nb = (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return (nb);
}
/*
int	main()
{
	printf("%d", ft_fibonacci (5));
	return (1);
}*/
