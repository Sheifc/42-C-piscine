/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheferna <sheferna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 16:30:01 by sheferna          #+#    #+#             */
/*   Updated: 2023/07/18 13:15:34 by sheferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[j])
		j++;
	if (size < 1)
		return (j);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (j);
}
/*
#include <string.h>
#include <unistd.h>

int	main(void)
{
	int		i;
	int		j;
	char	dest[100];
	char	src[];

	src[] = "Hello";
	i = ft_strlcpy(dest, src, 11) + '0';
	j = strlcpy(dest, src, 11) + '0';
	write(1, "La funcion ft_strlcpy devuelve: ", 32);
	write(1, &i, 1);
	write(1, "\nLa funcion strlcpy devuelve: ", 32);
	write(1, &j, 1);
	return (0);
}
*/