/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:34:13 by smarco            #+#    #+#             */
/*   Updated: 2022/07/25 19:04:08 by smarco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_check_base(char *base)
{
	int		i;
	int		j;

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] < 32 || base[i] > 127)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len_base;

	if (!ft_check_base(base))
		return ;
	len_base = ft_strlen(base);
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		ft_putnbr_base(2, base);
		ft_putnbr_base(147483648, base);
	}
	else if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
		ft_putnbr_base(nbr, base);
	}
	else if (nbr < len_base)
		ft_putchar(base[nbr]);
	else if (nbr)
	{
		ft_putnbr_base(nbr / len_base, base);
		ft_putnbr_base(nbr % len_base, base);
	}
}
/*
int	main()
{
	ft_putnbr_base(-2147483648, "01");

	return (0);
}*/
