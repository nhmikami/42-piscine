/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naharumi <naharumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 22:05:27 by naharumi          #+#    #+#             */
/*   Updated: 2024/09/02 11:26:49 by naharumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

int	verify_thousand(int nk, t_num *dict, int *count)
{
	int		i;
	char	n_aux[MAX_NUM_LEN];

	if (nk == 0)
		return (1);
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
	return (search_entry(n_aux, dict, count));
}

int	verify_hundred(char *nbr, int *i, t_num *dict, int *count)
{
	char	n_aux[2];

	if (nbr[*i] == '0')
	{
		(*i)++;
		return (1);
	}
	else
	{
		n_aux[0] = nbr[*i];
		n_aux[1] = '\0';
	}
	(*i)++;
	return (search_entry(n_aux, dict, count));
}

int	verify_ten(char *nbr, int *i, t_num *dict, int *count)
{
	char	n_aux[3];

	if (nbr[*i] == '0')
	{
		(*i)++;
		return (1);
	}
	else if (nbr[*i] == '1')
	{
		n_aux[0] = nbr[*i];
		n_aux[1] = nbr[*i + 1];
		n_aux[2] = '\0';
		(*i)++;
	}
	else
	{
		n_aux[0] = nbr[*i];
		n_aux[1] = '0';
		n_aux[2] = '\0';
	}
	(*i)++;
	return (search_entry(n_aux, dict, count));
}

int	verify_unit(char *nbr, int *i, t_num *dict, int *count)
{
	char	n_aux[2];

	if (nbr[*i] == '0')
	{
		(*i)++;
		return (1);
	}
	else
	{
		n_aux[0] = nbr[*i];
		n_aux[1] = '\0';
	}
	(*i)++;
	return (search_entry(n_aux, dict, count));
}

int	verify_nbr(char *nbr, t_num *dict, int *count)
{
	int	i;
	int	nk;
	int	verify;

	nk = (ft_strlen(nbr) - 1) / 3;
	i = 0;
	verify = 1;
	while (i < ft_strlen(nbr))
	{
		while (nk >= 0)
		{
			if ((ft_strlen(nbr) - i) % 3 == 0)
				verify = verify * verify_hundred(nbr, &i, dict, count);
			if ((ft_strlen(nbr) - i) % 3 == 2)
				verify = verify * verify_ten(nbr, &i, dict, count);
			if ((ft_strlen(nbr) - i) % 3 == 1)
				verify = verify * verify_unit(nbr, &i, dict, count);
			if (nbr[i - 1] != '0' || nbr[i - 2] != '0' || nbr[i - 3] != '0')
				verify = verify * verify_thousand(nk, dict, count);
			nk--;
		}
	}
	return (verify);
}
