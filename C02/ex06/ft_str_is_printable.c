/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 16:11:20 by smarco            #+#    #+#             */
/*   Updated: 2022/07/19 11:34:57 by smarco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	value;
	int	i;

	i = 0;
	value = 1;
	while (str[i])
	{
		if ((str[i] >= 32) && (str[i] <= 127))
			i++;
		else
			return (0);
	}
	return (value);
}
