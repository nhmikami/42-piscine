/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naharumi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 17:24:11 by naharumi          #+#    #+#             */
/*   Updated: 2024/08/22 12:53:16 by naharumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int     main(void)
{
        char    str1[] = "01234";
        char    str2[] = "012a!";

        printf("%s: %i\n", str1, ft_str_is_numeric(str1));
        printf("%s: %i\n", str2, ft_str_is_numeric(str2));
}
*/
