/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naharumi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 15:43:52 by naharumi          #+#    #+#             */
/*   Updated: 2024/08/25 18:34:58 by naharumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_left(int board[4][4], int row)
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	while (i < 4)
	{
		if (board[row][i] > max)
		{
			max = board[row][i];
			count++;
		}
		i++;
	}
	return (count);
}

int	count_right(int board[4][4], int row)
{
	int	i;
	int	max;
	int	count;

	i = 3;
	max = 0;
	count = 0;
	while (i >= 0)
	{
		if (board[row][i] > max)
		{
			max = board[row][i];
			count++;
		}
		i--;
	}
	return (count);
}

int	count_top(int board[4][4], int col)
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	while (i < 4)
	{
		if (board[i][col] > max)
		{
			max = board[i][col];
			count++;
		}
		i++;
	}
	return (count);
}

int	count_bottom(int board[4][4], int col)
{
	int	i;
	int	max;
	int	count;

	i = 3;
	max = 0;
	count = 0;
	while (i >= 0)
	{
		if (board[i][col] > max)
		{
			max = board[i][col];
			count++;
		}
		i--;
	}
	return (count);
}
