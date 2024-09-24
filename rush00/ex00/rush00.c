/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naharumi                                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 18:52:55 by naharumi          #+#    #+#             */
/*   Updated: 2024/09/02 11:32:41 by naharumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(int x, char border, char mid)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1 || i == x)
			ft_putchar(border);
		else
			ft_putchar(mid);
		i++;
	}
	ft_putchar('\n');
	return ;
}

void	rush(int x, int y)
{
	int	h;

	if (x <= 0 || y <= 0)
		return ;
	h = 1;
	while (h <= y)
	{
		if (h == 1 || h == y)
			print_line(x, 'o', '-');
		else
			print_line(x, '|', ' ');
		h++;
	}
	return ;
}
