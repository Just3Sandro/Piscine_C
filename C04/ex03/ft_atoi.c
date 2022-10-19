/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:25:45 by smarco            #+#    #+#             */
/*   Updated: 2022/07/25 21:08:23 by smarco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check(char *str, int i)
{
	while (str[i] < '0' && str[i] > '9')
	{
		if (str[i] != ' ' || str[i] != '\t' || str[i] != '\f' || str[i] != '\r'
			|| str[i] != '\n' || str[i] != '\v'
			|| str[i] != '-' || str[i] != '+')
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	count;
	int	nb;

	nb = 0;
	i = 0;
	count = 0;
	check(str, i);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\f' || str[i] == '\r'
		|| str[i] == '\n' || str[i] == '\v' || str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			count++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
			nb = nb * 10 + str[i] - 48;
			i++;
	}
	if (count % 2 == 1)
		nb = nb * -1;
	return (nb);
}
/*
int main()
{
	char str[] = "  ----456sdf98";
	printf("%d", ft_atoi(str));
	return (0);
}*/
