/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheferna <sheferna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 15:09:23 by sheferna          #+#    #+#             */
/*   Updated: 2023/07/22 19:13:24 by sheferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <string.h>
#include <unistd.h>

int	main(void)
{
	int i;
	int j;
	char *str;
	char *str1;

	char dest[100];
	char dest1[100];
	char src[] = "Hello";

	str = ft_strncpy(dest, src, 3);
	str1 = strncpy(dest1, src, 3);
	i = 0;
	write(1, "The ft_strncpy output: ", 23);
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	j = 0;
	write(1, "\nThe strncpy output: ", 22);
	while (str1[j])
	{
		write(1, &str1[j], 1);
		j++;
	}
	return (0);
}*/