/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naharumi <naharumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 18:35:21 by naharumi          #+#    #+#             */
/*   Updated: 2024/09/02 17:35:46 by naharumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = nb - 1;
	if (nb < 2)
		return (0);
	while (i > 1)
	{
		if (nb % i == 0)
			return (0);
		i--;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && !ft_is_prime(nb))
		nb++;
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("next prime after -1: %d\n", ft_find_next_prime(-1));
	printf("next prime after 0: %d\n", ft_find_next_prime(0));
	printf("next prime after 1: %d\n", ft_find_next_prime(1));
	printf("next prime after 2: %d\n", ft_find_next_prime(2));
	printf("next prime after 4: %d\n", ft_find_next_prime(4));
	printf("next prime after 8: %d\n", ft_find_next_prime(8));
	printf("next prime after 10: %d\n", ft_find_next_prime(10));
	printf("next prime after 17: %d\n", ft_find_next_prime(17));
	printf("next prime after 100: %d\n", ft_find_next_prime(100));
	return (0);
}*/
