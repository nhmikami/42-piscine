/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naharumi <naharumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 17:51:41 by naharumi          #+#    #+#             */
/*   Updated: 2024/09/05 18:07:15 by naharumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*array;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	array = malloc(sizeof(int) * size);
	if (!array)
	{
		*range = 0;
		return (-1);
	}
	*range = array;
	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	return (size);
}
/*
#include <stdio.h>
int main()
{
	int i;
	int *p1;
	int temp[] = {0, 1, 2};
	p1 = temp;
	int size = 3;
	
	printf("original string: [ ");
	for (i = 0; i < size; i++) {
		printf("%d ", p1[i]);
	}
	printf("] \n\n");
	if (size > 0)
	{
		printf("test 1: [-2, 4]\n");
		size = ft_ultimate_range(&p1, -2, 4);
		printf("new string: [ ");
		for (i = 0; i < size; i++) {
			printf("%d ", p1[i]);
		}
		printf("] \n");
		printf("size = %i\n\n", size);

		printf("test 2: [2, 2]\n");
		size = ft_ultimate_range(&p1, 2, 2);
		printf("new string: [ ");
		for (i = 0; i < size; i++) {
			printf("%d ", p1[i]);
		}
		printf("] \n");
		printf("size = %i\n\n", size);

		printf("test 3: [4, 2]\n");
		size = ft_ultimate_range(&p1, 4, 2);
		printf("new string: [ ");
		for (i = 0; i < size; i++) {
			printf("%d ", p1[i]);
		}
		printf("] \n");
		printf("size = %i\n\n", size);

		printf("test 4: [1, 12]\n");
		size = ft_ultimate_range(&p1, 1, 12);
		printf("new string: [ ");
		for (i = 0; i < size; i++) {
			printf("%d ", p1[i]);
		}
		printf("] \n");
		printf("size = %i\n\n", size);
	}
	free (p1);
	return (0);
}*/
