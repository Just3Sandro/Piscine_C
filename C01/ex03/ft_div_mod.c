/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 15:50:04 by smarco            #+#    #+#             */
/*   Updated: 2022/07/14 14:51:29 by smarco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
*int main()
*{
*	int	a;
*	int b;
*	int	div;
*	int	mod;
*
*	a=42;
*	b=10;
*	ft_div_mod(a, b, &div, &mod);
*	printf("div :%d mod :%d", div, mod);
}*/
