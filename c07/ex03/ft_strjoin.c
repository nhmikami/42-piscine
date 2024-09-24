/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naharumi <naharumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 14:52:00 by naharumi          #+#    #+#             */
/*   Updated: 2024/09/05 17:33:47 by naharumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

unsigned int	joined_size(int size, char **strs, char *sep)
{
	int				i;
	unsigned int	total_size;

	if (size < 1)
		return (1);
	i = 0;
	total_size = 0;
	while (i < size)
	{
		total_size = total_size + ft_strlen(strs[i]);
		i++;
	}
	total_size = total_size + (ft_strlen(sep) * (size - 1));
	return (total_size + 1);
}

void	str_cat(char *tab, int *k, char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		tab[*k] = str[j];
		j++;
		(*k)++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		k;
	char	*tab;

	tab = malloc(joined_size(size, strs, sep));
	if (tab == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (i < size)
	{
		str_cat(tab, &k, strs[i]);
		if (i < size - 1)
			str_cat(tab, &k, sep);
		i++;
	}
	tab[k] = '\0';
	return (tab);
}
/*
#include <stdio.h>
char	*ft_strjoin(int size, char **strs, char *sep);
int	main(void)
{
	// Test 1: Basic cases
	char *strs1[] = {"Hello", "world", "!"};
	char *sep1 = " ";
	char *result1 = ft_strjoin(3, strs1, sep1);
	printf("Result 1: %s\n", result1);  // "Hello world !"
	free(result1);

	// Test 2: No separator
	char *strs2[] = {"42", "Tokyo", "Seoul"};
	char *sep2 = "";
	char *result2 = ft_strjoin(3, strs2, sep2);
	printf("Result 2: %s\n", result2);  // "42TokyoSeoul"
	free(result2);

	// Test 3: One string
	char *strs3[] = {"Single"};
	char *sep3 = "42";
	char *result3 = ft_strjoin(1, strs3, sep3);
	printf("Result 3: %s\n", result3);  // "Single"
	free(result3);

	// Test 4: No strings
	char *result4 = ft_strjoin(0, NULL, "42");
	printf("Result 4: %s\n", result4);  // ""
	free(result4);

	// Test 5: Multiple empty strings
	char *strs5[] = {"", "", ""};
	char *sep5 = "SEP";
	char *result5 = ft_strjoin(3, strs5, sep5);
	printf("Result 5: %s\n", result5);  // "SEPSEP"
	free(result5);

	// Test 6: Empty separator
	char *strs6[] = {"A", "B", "C"};
	char *sep6 = "";
	char *result6 = ft_strjoin(3, strs6, sep6);
	printf("Result 6: %s\n", result6);  // "ABC"
	free(result6);

	// Test 7: Special characters
	char *strs7[] = {"abc", "123", "!@#"};
	char *sep7 = "==";
	char *result7 = ft_strjoin(3, strs7, sep7);
	printf("Result 7: %s\n", result7);  // "abc==123==!@#"
	free(result7);

	return 0;
}*/
