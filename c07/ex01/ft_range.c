/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naharumi <naharumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 17:57:53 by naharumi          #+#    #+#             */
/*   Updated: 2024/09/05 17:37:30 by naharumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*array;

	i = 0;
	size = max - min;
	if (min >= max)
		return (0);
	array = malloc(sizeof(int) * size);
	if (!array)
		return (0);
	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
/*
#include <stdio.h>
int	main()
{
	int	i = 0;
	int	min;
	int	max;
	int	*arr;

	min = -2; max = 4;
	arr = ft_range(min, max);
	printf("test 1 [%i, %i]: ", min, max);
	if (arr != NULL)
	{
		for (i = 0; i < (max - min); i++)
			printf("%i ", arr[i]);
	}
	printf("\n");

	min = 2; max = 2;
	arr = ft_range(min, max);
	printf("test 2 [%i, %i]: ", min, max);
	if (arr != NULL)
	{
		for (i = 0; i < (max - min); i++)
			printf("%i ", arr[i]);
	}
	printf("\n");

	min = 4; max = 2;
	arr = ft_range(min, max);
	printf("test 3 [%i, %i]: ", min, max);
	if (arr != NULL)
	{
		for (i = 0; i < (max - min); i++)
			printf("%i ", arr[i]);
	}
	printf("\n");

	min = 1; max = 12;
	arr = ft_range(min, max);
	printf("test 4 [%i, %i]: ", min, max);
	if (arr != NULL)
	{
		for (i = 0; i < (max - min); i++)
			printf("%i ", arr[i]);
	}
	printf("\n");

	free (arr);
	return (0);
}*/
