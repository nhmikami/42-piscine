/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naharumi                                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 13:17:00 by naharumi          #+#    #+#             */
/*   Updated: 2024/09/02 11:31:52 by naharumi         ###   ########.fr       */
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
		if (h == 1)
			print_line(x, 'A', 'B');
		else if (h == y)
			print_line(x, 'C', 'B');
		else
			print_line(x, 'B', ' ');
		h++;
	}
	return ;
}
