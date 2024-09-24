/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naharumi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 09:50:50 by naharumi          #+#    #+#             */
/*   Updated: 2024/08/22 13:11:56 by naharumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	i;

	len = 0;
	while (src[len] != '\0')
		len++;
	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}
/*
#include <stdio.h>

int     main(void)
{
        char    dest[30];
        char    src[] = "Hello world!";
	unsigned int	n;
	unsigned int	len;

	n = 30;
	len = ft_strlcpy(dest, src, n);
	printf("src:  %s\n", src);
        printf("dest: %s\n", dest);
	printf("len = %u\n", len);
}
*/
