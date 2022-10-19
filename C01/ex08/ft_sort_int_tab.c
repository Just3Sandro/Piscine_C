/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:28:32 by smarco            #+#    #+#             */
/*   Updated: 2022/07/13 20:37:53 by smarco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 0;
	while (i < size -1)
	{
		j = 0;
		while (j < size - i -1)
		{
			if (tab[j] > tab[j +1])
			{
				tmp = tab[j];
				tab[j] = tab[j +1];
				tab[j +1] = tmp;
			}
			j++;
		}
		i++;
	}
}
