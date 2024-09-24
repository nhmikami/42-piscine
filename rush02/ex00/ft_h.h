/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_h.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naharumi <naharumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 21:55:18 by naharumi          #+#    #+#             */
/*   Updated: 2024/09/02 11:27:29 by naharumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H_H
# define FT_H_H
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <fcntl.h>

# define DEFAULT_FILENAME "numbers.dict"
# define BUFFER_SIZE 2048
# define MAX_NUM_LEN 256
# define MAX_LIT_LEN 256

typedef struct s_num
{
	char	num[MAX_NUM_LEN];
	char	lit[MAX_LIT_LEN];
}	t_num;

t_num	*read_dict(int fd, t_num *dict, int *count);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
int		get_unit(char *nbr, int *i, t_num *dict, int *count);
int		print_nbr(char *nbr, t_num *dict, int *count);
int		search_entry(char *nbr, t_num *dict, int *count);
int		search_nbr(char *nbr, t_num *dict, int *count);
int		verify_thousand(int nk, t_num *dict, int *count);
int		verify_hundred(char *nbr, int *i, t_num *dict, int *count);
int		verify_ten(char *nbr, int *i, t_num *dict, int *count);
int		verify_unit(char *nbr, int *i, t_num *dict, int *count);
int		verify_nbr(char *nbr, t_num *dict, int *count);

#endif
