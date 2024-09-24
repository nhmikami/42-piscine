/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naharumi <naharumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 18:49:41 by naharumi          #+#    #+#             */
/*   Updated: 2024/09/02 17:35:41 by naharumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include <stdio.h>
int	main(void)
{
	printf("fibonacci (0) == %i, expected: %i\n", ft_fibonacci(0), 0);
	printf("fibonacci (1) == %i, expected: %i\n", ft_fibonacci(1), 1);
	printf("fibonacci (2) == %i, expected: %i\n", ft_fibonacci(2), 1);
	printf("fibonacci (3) == %i, expected: %i\n", ft_fibonacci(3), 2);
	printf("fibonacci (4) == %i, expected: %i\n", ft_fibonacci(4), 3);
	printf("fibonacci (5) == %i, expected: %i\n", ft_fibonacci(5), 5);
	printf("fibonacci (6) == %i, expected: %i\n", ft_fibonacci(6), 8);
	return (0);
}*/
