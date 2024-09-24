/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naharumi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 14:24:33 by naharumi          #+#    #+#             */
/*   Updated: 2024/08/24 18:39:22 by naharumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "solve.h"

int	define_views(char *str, int views[4][4])
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			views[n / 4][n % 4] = str[i] - '0';
			i++;
			n++;
			if (str[i] >= '1' && str[i] <= '4')
				return (0);
		}
		else
			return (0);
		if (str[i] == ' ')
			i++;
	}
	if (n != 16 || i != 31)
		return (0);
	return (1);
}

void	put_zero(int board[4][4])
{
	int	row;
	int	col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			board[row][col] = 0;
			col++;
		}
		row++;
	}
	return ;
}

void	print_board(int board[4][4])
{
	int		row;
	int		col;
	char	c;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			c = board[row][col] + '0';
			write(1, &c, 1);
			if (col != 3)
				write(1, " ", 1);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
	return ;
}

int	main(int ac, char **av)
{
	int	board[4][4];
	int	views[4][4];

	if (ac == 2)
	{
		put_zero(board);
		if (define_views(av[1], views) == 0)
		{
			write(1, "Error\n", 6);
			return (0);
		}
		if (solve_board(board, views, 0, 0) == 1)
		{
			print_board(board);
			return (0);
		}
		else
		{
			write(1, "Error\n", 6);
			return (0);
		}
	}
	write(1, "Error\n", 6);
	return (0);
}
