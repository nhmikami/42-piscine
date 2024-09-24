/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_dict.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naharumi <naharumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 22:17:59 by naharumi          #+#    #+#             */
/*   Updated: 2024/09/02 11:25:26 by naharumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

void	read_number(char *dict_buf, int *i, t_num *dict, int count)
{
	int	j;

	j = 0;
	while (dict_buf[*i] >= '0' && dict_buf[*i] <= '9')
	{
		dict[count].num[j] = dict_buf[*i];
		j++;
		(*i)++;
	}
}

void	read_literal(char *dict_buf, int *i, t_num *dict, int count)
{
	int	j;

	j = 0;
	while (dict_buf[*i] != '\n' && dict_buf[*i] != '\0')
	{
		dict[count].lit[j] = dict_buf[*i];
		j++;
		(*i)++;
	}
}

t_num	*read_dict(int fd, t_num *dict, int *count)
{
	int		i;
	int		total_size;
	char	dict_buf[BUFFER_SIZE];

	dict = malloc(sizeof(t_num) * BUFFER_SIZE);
	total_size = read(fd, dict_buf, BUFFER_SIZE);
	i = 0;
	*count = 0;
	while (i < total_size)
	{
		read_number(dict_buf, &i, dict, *count);
		while (dict_buf[i] == ' ' || dict_buf[i] == ':')
			i++;
		read_literal(dict_buf, &i, dict, *count);
		if (dict_buf[i] == '\n')
			i++;
		(*count)++;
	}
	return (dict);
}
