/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naharumi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 14:23:06 by naharumi          #+#    #+#             */
/*   Updated: 2024/08/25 18:32:59 by naharumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "count.h"

int	num_is_valid(int board[4][4], int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (board[row][i] == num || board[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}

int	check_row(int board[4][4], int views[4][4], int row)
{
	if (views[2][row] != count_left(board, row))
		return (0);
	if (views[3][row] != count_right(board, row))
		return (0);
	return (1);
}

int	check_col(int board[4][4], int views[4][4], int col)
{
	if (views[0][col] != count_top(board, col))
		return (0);
	if (views[1][col] != count_bottom(board, col))
		return (0);
	return (1);
}

int	check_row_col(int board[4][4], int views[4][4], int row, int col)
{
	int	check_r;
	int	check_c;

	check_r = 1;
	check_c = 1;
	if (col == 3)
		check_r = check_row(board, views, row);
	if (row == 3)
		check_c = check_col(board, views, col);
	if (check_r == 1 && check_c == 1)
		return (1);
	else
		return (0);
}

int	solve_board(int board[4][4], int views[4][4], int row, int col)
{
	int	num;
	int	check;

	if (row == 4)
		return (1);
	if (col == 4)
		return (solve_board(board, views, row + 1, 0));
	num = 1;
	while (num <= 4)
	{
		if (num_is_valid(board, row, col, num))
		{
			board[row][col] = num;
			check = 1;
			check = check_row_col(board, views, row, col);
			if (check == 1)
				if (solve_board(board, views, row, col + 1) == 1)
					return (1);
			board[row][col] = 0;
		}
		num++;
	}
	return (0);
}
