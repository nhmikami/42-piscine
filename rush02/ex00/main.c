/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naharumi <naharumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 12:30:31 by naharumi          #+#    #+#             */
/*   Updated: 2024/09/02 11:22:14 by naharumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

int	left_zeros(int ac, char **av, int *i)
{
	while (av[ac - 1][*i] != '\0' && av[ac - 1][*i] == '0')
		(*i)++;
	if (av[ac - 1][*i] == '\0')
		return (0);
	else
		return (1);
}

char	*get_nbr(char *nbr, int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (left_zeros(ac, av, &i) == 0)
	{
		nbr[0] = '0';
		nbr[1] = '\0';
		return (nbr);
	}
	while (av[ac - 1][i] != '\0' && av[ac - 1][i] == ' ')
		i++;
	while (av[ac - 1][i] != '\0'
			&& (av[ac - 1][i] >= '0' && av[ac - 1][i] <= '9'))
	{
		nbr[j] = av[ac - 1][i];
		i++;
		j++;
	}
	nbr[j] = '\0';
	return (nbr);
}

int	verify_input(int ac, char **av)
{
	int	i;

	if (ac == 1)
		return (-1);
	if (av[ac - 1][0] == '\0')
		return (-1);
	i = 0;
	while (av[ac - 1][i] != '\0')
	{
		if (av[ac - 1][i] < '0' || av[ac - 1][i] > '9')
			return (-1);
		i++;
	}
	return (0);
}

int	get_file(int ac, char **av)
{
	int	fd;

	fd = -1;
	if (ac == 2)
		fd = open(DEFAULT_FILENAME, O_RDONLY);
	else if (ac == 3)
		fd = open(av[1], O_RDONLY);
	return (fd);
}

int	main(int ac, char **av)
{
	int		fd;
	char	nbr[MAX_NUM_LEN];
	t_num	*dict;
	int		count;

	dict = NULL;
	fd = get_file(ac, av);
	if (fd == -1 || verify_input(ac, av) == -1)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	dict = read_dict(fd, dict, &count);
	get_nbr(nbr, ac, av);
	if (verify_nbr(nbr, dict, &count) == 0)
	{
		write(1, "Dict Error\n", 11);
		return (1);
	}
	print_nbr(nbr, dict, &count);
	close (fd);
	free (dict);
	return (0);
}
