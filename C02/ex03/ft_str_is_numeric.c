/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 20:53:53 by smarco            #+#    #+#             */
/*   Updated: 2022/07/19 11:30:28 by smarco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_numeric(char *str)
{
	int	value;
	int	i;

	i = 0;
	value = 1;
	while (str[i])
	{
		if ((str[i] >= '0') && (str[i] <= '9'))
		{
			value = 1;
			i++;
		}
		else
			return (0);
	}
	return (value);
}
/*
int main()
{
	char str[] = "";

	ft_str_is_numeric(str);
}*/
