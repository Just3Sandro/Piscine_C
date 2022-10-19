/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 17:59:57 by smarco            #+#    #+#             */
/*   Updated: 2022/07/28 15:31:38 by smarco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_prime(int nb)
{
	int	i;

	i = 2;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 0;
	while (nb <= 2147483647)
	{
		if (nb < 2)
			return (2);
		if (nb == 2147483647)
			return (nb);
		i = ft_prime(nb);
		if (i == 1)
			return (nb);
		nb++;
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	printf("%d", ft_find_next_prime(13));
	return (0);
}*/
