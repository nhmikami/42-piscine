/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naharumi <naharumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 10:55:09 by naharumi          #+#    #+#             */
/*   Updated: 2024/09/02 17:38:15 by naharumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i < power)
	{
		res = res * nb;
		i++;
	}
	return (res);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("-1^3 = %d\n", ft_iterative_power(-1, 3));   // -1
	printf("3^-1 = %d\n", ft_iterative_power(3, -1));   // 0
	printf("3^0 = %d\n", ft_iterative_power(3, 0));   // 1
	printf("0^0 = %d\n", ft_iterative_power(0, 0));   // 1
	printf("0^1 = %d\n", ft_iterative_power(0, 1));   // 0
	printf("0^999 = %d\n", ft_iterative_power(0, 999));   // 0
	printf("1^0 = %d\n", ft_iterative_power(1, 0));   // 1
	printf("1^1 = %d\n", ft_iterative_power(1, 1));   // 1
	printf("1^2 = %d\n", ft_iterative_power(1, 2));   // 1
	printf("3^4 = %d\n", ft_iterative_power(3, 4));   // 81
	printf("2^0 = %d\n", ft_iterative_power(2, 0));   // 1
	printf("5^3 = %d\n", ft_iterative_power(5, 3));   // 125
	printf("7^2 = %d\n", ft_iterative_power(7, 2));   // 49
	printf("2^-3 = %d\n", ft_iterative_power(2, -3)); // 0
	return (0);
}*/