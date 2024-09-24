/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naharumi <naharumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 21:53:08 by naharumi          #+#    #+#             */
/*   Updated: 2024/09/02 12:12:25 by naharumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

int	get_thousand(int nk, t_num *dict, int *count)
{
	int		i;
	char	n_aux[MAX_NUM_LEN];

	if (nk == 0)
		return (0);
	else
	{
		n_aux[0] = '1';
		i = 1;
		while (i <= (nk * 3))
		{
			n_aux[i] = '0';
			i++;
		}
		n_aux[i] = '\0';
	}
	search_nbr(n_aux, dict, count);
	write(1, " ", 1);
	return (1);
}

int	get_hundred(char *nbr, int *i, t_num *dict, int *count)
{
	int		flag;
	char	n_aux[2];

	flag = 1;
	if (nbr[*i] == '0')
		flag = 0;
	else
	{
		n_aux[0] = nbr[*i];
		n_aux[1] = '\0';
		search_nbr(n_aux, dict, count);
		write(1, " hundred ", 9);
	}
	(*i)++;
	return (flag);
}

int	get_ten(char *nbr, int *i, t_num *dict, int *count)
{
	int		flag;
	char	n_aux[3];

	flag = 1;
	if (nbr[*i] == '0')
		flag = 0;
	else if (nbr[*i] == '1')
	{
		n_aux[0] = nbr[*i];
		n_aux[1] = nbr[*i + 1];
		n_aux[2] = '\0';
		search_nbr(n_aux, dict, count);
		(*i)++;
	}
	else
	{
		n_aux[0] = nbr[*i];
		n_aux[1] = '0';
		n_aux[2] = '\0';
		search_nbr(n_aux, dict, count);
	}
	if (flag == 1)
		write(1, " ", 1);
	(*i)++;
	return (flag);
}

int	get_unit(char *nbr, int *i, t_num *dict, int *count)
{
	int		flag;
	char	n_aux[2];

	flag = 1;
	if (*i == 0 && nbr[*i] == '0')
		write(1, "zero", 4);
	if (nbr[*i] == '0')
		flag = 0;
	else
	{
		n_aux[0] = nbr[*i];
		n_aux[1] = '\0';
		search_nbr(n_aux, dict, count);
	}
	if (flag == 1)
		write(1, " ", 1);
	(*i)++;
	return (flag);
}

int	print_nbr(char *nbr, t_num *dict, int *count)
{
	int	i;
	int	len;
	int	nk;

	len = ft_strlen(nbr);
	nk = (len - 1) / 3;
	i = 0;
	while (i < len)
	{
		while (nk >= 0)
		{
			if ((len - i) % 3 == 0)
				get_hundred(nbr, &i, dict, count);
			if ((len - i) % 3 == 2)
				get_ten(nbr, &i, dict, count);
			if ((len - i) % 3 == 1)
				get_unit(nbr, &i, dict, count);
			if (nbr[i - 1] != '0' || nbr[i - 2] != '0' || nbr[i - 3] != '0')
				get_thousand(nk, dict, count);
			nk--;
		}
	}
	write(1, "\n", 1);
	return (0);
}
