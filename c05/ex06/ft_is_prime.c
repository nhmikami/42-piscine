/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naharumi <naharumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 17:59:49 by naharumi          #+#    #+#             */
/*   Updated: 2024/09/02 17:35:44 by naharumi         ###   ########.fr       */
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
/*
#include <stdio.h>
#include <limits.h>
int	main(void)
{
	int i;
	i = -1; printf("%i : %i\n", i, ft_is_prime(i));
	i = 0;	printf("%i : %i\n", i, ft_is_prime(i));
	i = 1;	printf("%i : %i\n", i, ft_is_prime(i));
	i = 2;  printf("%i : %i\n", i, ft_is_prime(i));
	i = 3;  printf("%i : %i\n", i, ft_is_prime(i));
	i = 5;  printf("%i : %i\n", i, ft_is_prime(i));
	i = 7;  printf("%i : %i\n", i, ft_is_prime(i));
	i = 17; printf("%i : %i\n", i, ft_is_prime(i));
	i = 21; printf("%i : %i\n", i, ft_is_prime(i));
	i = INT_MAX;  printf("%i : %i\n", i, ft_is_prime(i));
}*/
