/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naharumi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 17:10:20 by naharumi          #+#    #+#             */
/*   Updated: 2024/08/27 14:58:13 by naharumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

int	check_doubles(char *base, char c, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (base[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	check_base(char *base)
{
	int	i;

	if (base[0] == '\0' || base [1] == '\0')
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (check_doubles(base, base[i], i) == 0)
			return (0);
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] == 127)
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	long	nbl;

	len = 0;
	nbl = nbr;
	while (base[len] != '\0')
		len++;
	if (check_base(base) == 1)
	{
		if (nbl < 0)
		{
			ft_putchar('-');
			nbl = nbl * (-1);
		}
		if (nbl < len)
			ft_putchar(base[nbl]);
		if (nbl >= len)
		{
			ft_putnbr_base(nbl / len, base);
			ft_putnbr_base(nbl % len, base);
		}
	}
	return ;
}

#include <stdio.h>
int	main(void)
{
	int	nb;
	char	base[] = "01234567";

	nb = -2147483648;
	ft_putnbr_base(nb, base);
	return (0);
}
