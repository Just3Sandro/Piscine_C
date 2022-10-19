/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 21:39:02 by smarco            #+#    #+#             */
/*   Updated: 2022/07/12 14:04:12 by smarco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	length_nb(int nb)
{
	int	value;

	value = 1;
	while (nb / 10 != 0)
	{
		nb = nb / 10;
		value = value * 10;
	}
	return (value);
}

void	ft_putnbr(int nb)
{
	int	length;

	length = length_nb(nb);
	while (length != 0)
	{
		ft_putchar(nb / length + '0');
		nb = nb % length;
		length = length / 10;
	}
}
