/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naharumi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 19:07:05 by naharumi          #+#    #+#             */
/*   Updated: 2024/08/27 14:51:19 by naharumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
/*
#include <stdio.h>
int main()
{
	
    char *test1 = "   -12345abc";
    char *test2 = "+42-098";
    char *test3 = "   +-00789-";
    char *test4 = " abc";
    char *test5 = " ---+--+1234ab567";
    char *test6 = "123abc456";
    char *test7 = "";
    char *test8 = "   ";

    printf("Resultado 1: %d -12345\n", ft_atoi(test1));  // Deve imprimir -12345
    printf("Resultado 2: %d 42\n", ft_atoi(test2));  // Deve imprimir 42
    printf("Resultado 3: %d -789\n", ft_atoi(test3));  // Deve imprimir 789
    printf("Resultado 4: %d 0\n", ft_atoi(test4));  // Deve imprimir 0
    printf("Resultado 5: %d -1234\n", ft_atoi(test5)); // Deve imprimir -1234
    printf("Resultado 6: %d 123\n", ft_atoi(test6)); // Deve imprimir 123
    printf("Resultado 7: %d 0\n", ft_atoi(test7)); // Deve imprimir 0
    printf("Resultado 8: %d 0\n", ft_atoi(test8)); // Deve imprimir 0	
	
	return 0;
}*/
