/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 21:07:14 by smarco            #+#    #+#             */
/*   Updated: 2022/07/19 11:33:11 by smarco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	value;
	int	i;

	i = 0;
	value = 1;
	while (str[i])
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
			i++;
		else
			return (0);
	}
	return (value);
}
