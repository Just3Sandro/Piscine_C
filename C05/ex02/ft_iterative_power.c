/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 15:30:01 by smarco            #+#    #+#             */
/*   Updated: 2022/07/28 19:09:36 by smarco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	j;

	i = 1;
	j = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > i)
	{
		nb = j * nb;
		i++;
	}
	return (nb);
}
/*
int main()
{
	printf("%d", ft_iterative_power(0, 4));
	return (0);
}*/
