/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naharumi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 19:13:22 by naharumi          #+#    #+#             */
/*   Updated: 2024/08/21 19:18:48 by naharumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(int n)
{
	int		i;
	int		j;
	char	aux[10];

	i = 0;
	while (n > 0)
	{
		aux[i] = (n % 10) + '0';
		n = n / 10;
		i++;
	}
	j = i - 1;
	while (j >= 0)
	{
		write(1, &aux[j], 1);
		j--;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	print_number(nb);
	return ;
}
