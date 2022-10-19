/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 16:11:20 by smarco            #+#    #+#             */
/*   Updated: 2022/07/19 11:56:43 by smarco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	value;
	int	i;

	i = 0;
	value = 1;
	while (str[i] != '\0' )
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
			i++;
		else if ((str[i] >= 'A') && (str[i] <= 'Z'))
			i++;
		else
			return (0);
	}
	return (value);
}
/*
int	main()
{
	char	str[] = "6abABC";
	ft_str_is_alpha(str);
}*/
