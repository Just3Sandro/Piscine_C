/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 18:29:59 by smarco            #+#    #+#             */
/*   Updated: 2022/07/28 19:42:29 by smarco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap(char **s1, char **s2)
{
	char	*tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

void	ft_string(char **str, int n)
{
	int	i;
	int	j;

	i = 1;
	while (i < n)
	{
		j = 0;
		while (str[i][j])
		{
			write(1, &str[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	ft_sort_params(char **str, int n)
{
	int	i;
	int	j;

	i = 1;
	while (i < n - 1)
	{
		j = 1;
		while (j < n -1)
		{
			if (ft_strcmp(str[j], str[j + 1]) > 0)
			{
				ft_swap(&str[j], &str[j + 1]);
			}
			j++;
		}
		i++;
	}
	ft_string(str, n);
}

int	main(int argc, char **argv)
{
	ft_sort_params(argv, argc);
	return (0);
}
