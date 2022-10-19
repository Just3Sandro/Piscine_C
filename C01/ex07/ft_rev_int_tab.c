/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 22:10:21 by smarco            #+#    #+#             */
/*   Updated: 2022/07/14 14:55:34 by smarco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	first;
	int	i;

	i = 0;
	while (i < size)
	{
		size--;
		first = tab[i];
		tab[i] = tab[size];
		tab[size] = first;
		i++;
	}
}
/*
int	main()
{
	int tab[6] = {8, 6, 25, 12, 42 ,1};
	int	size = 6;

	ft_rev_int_tab(tab, size);
	int i = 0;
	while (i < 6)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}*/
