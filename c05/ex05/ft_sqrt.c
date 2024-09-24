/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naharumi <naharumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 17:46:56 by naharumi          #+#    #+#             */
/*   Updated: 2024/09/02 17:35:42 by naharumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	if (nb > 0)
	{
		while (n * n <= nb)
		{
			if (n * n == nb)
				return (n);
			else if (n >= 46341)
				return (0);
			n++;
		}
	}
	return (0);
}
/*
#include <stdio.h>
#include <limits.h>
int	main(void)
{	
	printf("sqrt(%i) == %i\n", -1, ft_sqrt(-1));
	printf("sqrt(%i) == %i\n", 0, ft_sqrt(0));
	printf("sqrt(%i) == %i\n", 1, ft_sqrt(1));
	printf("sqrt(%i) == %i\n", 2, ft_sqrt(2));
	printf("sqrt(%i) == %i\n", 4, ft_sqrt(4));
	printf("sqrt(%i) == %i\n", 16, ft_sqrt(16));
	printf("sqrt(%i) == %i\n", 255, ft_sqrt(225));
	printf("sqrt(%i) == %i\n", 10000, ft_sqrt(10000));
	printf("sqrt(%i) == %i\n", 2147395600, ft_sqrt(2147395600));
	printf("sqrt(%i) == %i\n", INT_MAX, ft_sqrt(INT_MAX));
	return (0);
}*/
