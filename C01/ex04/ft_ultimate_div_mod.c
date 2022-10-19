/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:17:45 by smarco            #+#    #+#             */
/*   Updated: 2022/07/14 14:54:40 by smarco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = *a;
	d = *b;
	*a = c / d;
	*b = c % d;
}
/*int main()
*{
*	int	a;
*	int	b;
*
*	a = 42;
*	b = 10;
*	ft_ultimate_div_mod(&a, &b);
*	printf("a = %d, b = %d ", a, b);
}*/
