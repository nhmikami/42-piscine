/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naharumi                                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:15:19 by naharumi          #+#    #+#             */
/*   Updated: 2024/09/02 11:32:19 by naharumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(int x, char left, char mid, char right)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar(left);
		else if (i == x)
			ft_putchar(right);
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
			print_line(x, 'A', 'B', 'C');
		else if (h == y)
			print_line(x, 'C', 'B', 'A');
		else
			print_line(x, 'B', ' ', 'B');
		h++;
	}
	return ;
}
