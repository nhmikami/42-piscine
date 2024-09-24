/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naharumi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 17:34:28 by naharumi          #+#    #+#             */
/*   Updated: 2024/08/22 12:56:35 by naharumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int     main(void)
{
        char    str1[] = "ABCDE";
        char    str2[] = "abCDe";

        printf("%s: %i\n", str1, ft_str_is_uppercase(str1));
        printf("%s: %i\n", str2, ft_str_is_uppercase(str2));
}
*/
