/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naharumi <naharumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 22:09:58 by naharumi          #+#    #+#             */
/*   Updated: 2024/09/02 11:26:26 by naharumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

int	search_entry(char *nbr, t_num *dict, int *count)
{
	int	entry;
	int	len;

	len = 0;
	entry = 0;
	while (entry <= *count)
	{
		if (ft_strcmp(nbr, dict[entry].num) == 0)
			return (1);
		entry++;
	}
	return (0);
}

int	search_nbr(char *nbr, t_num *dict, int *count)
{
	int	entry;
	int	len;

	entry = 0;
	while (entry <= *count)
	{
		if (ft_strcmp(nbr, dict[entry].num) == 0)
		{
			len = ft_strlen(dict[entry].lit);
			write(1, &dict[entry].lit, len);
		}
		entry++;
	}
	return (0);
}
