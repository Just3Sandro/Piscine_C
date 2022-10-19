/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:19:01 by smarco            #+#    #+#             */
/*   Updated: 2022/07/12 13:59:02 by smarco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_write(char i, char j, char k)
{
	if ((i == '7') && (j == '8') && (k == '9'))
	{
		write (1, &i, 1);
		write (1, &j, 1);
		write (1, &k, 1);
	}
	else
	{	
		write (1, &i, 1);
		write (1, &j, 1);
		write (1, &k, 1);
		write (1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	j = '1';
	k = '2';
	while (i <= '9')
	{
		while (j <= '9')
		{
			while (k <= '9')
			{
				ft_write(i, j, k);
				k++;
			}
			j++;
			k = j +1;
		}
		i++;
		j = i;
	}
}
