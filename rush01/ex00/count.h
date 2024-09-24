/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naharumi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 15:44:07 by naharumi          #+#    #+#             */
/*   Updated: 2024/08/25 18:48:13 by naharumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COUNT_H
# define COUNT_H

int	count_left(int board[4][4], int row);
int	count_right(int board[4][4], int row);
int	count_top(int board[4][4], int col);
int	count_bottom(int board[4][4], int col);

#endif
