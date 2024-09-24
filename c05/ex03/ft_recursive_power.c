/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naharumi <naharumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 11:17:21 by naharumi          #+#    #+#             */
/*   Updated: 2024/09/02 17:38:19 by naharumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
#include <stdio.h>
int	main(void)
{
	printf("-1^3 = %d\n", ft_recursive_power(-1, 3));   // -1
	printf("3^-1 = %d\n", ft_recursive_power(3, -1));   // 0
	printf("3^0 = %d\n", ft_recursive_power(3, 0));   // 1
	printf("0^0 = %d\n", ft_recursive_power(0, 0));   // 1
	printf("0^1 = %d\n", ft_recursive_power(0, 1));   // 0
	printf("0^999 = %d\n", ft_recursive_power(0, 999));   // 0
	printf("1^0 = %d\n", ft_recursive_power(1, 0));   // 1
	printf("1^1 = %d\n", ft_recursive_power(1, 1));   // 1
	printf("1^2 = %d\n", ft_recursive_power(1, 2));   // 1
	printf("3^4 = %d\n", ft_recursive_power(3, 4));   // 81
	printf("2^0 = %d\n", ft_recursive_power(2, 0));   // 1
	printf("5^3 = %d\n", ft_recursive_power(5, 3));   // 125
	printf("7^2 = %d\n", ft_recursive_power(7, 2));   // 49
	printf("2^-3 = %d\n", ft_recursive_power(2, -3)); // 0
	return (0);
}*/