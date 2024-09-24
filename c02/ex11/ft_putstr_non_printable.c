/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naharumi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:51:09 by naharumi          #+#    #+#             */
/*   Updated: 2024/08/26 18:50:46 by naharumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void	ft_putstr_non_printable(char *str)
{
	int			i;
	const char	*hex = "0123456789abcdef";

	i = 0;
	while (str[i] != '\0')
	{
		unsigned char c = (unsigned char)str[i];
		if (c >= 32 && c <= 126)
			ft_putchar(c);
		else
		{
			ft_putchar('\\');
			ft_putchar(hex[str[i] / 16]);
			ft_putchar(hex[str[i] % 16]);
		}
		i++;
	}
	return ;
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "Oi\nvoce esta bem?";

	printf("string original : %s\n", str);
	printf("\n");
	printf("string retornada: ");
	printf("\n");
	ft_putstr_non_printable(str);
	printf("\n");
}
*/
