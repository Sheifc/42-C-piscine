/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheferna <sheferna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:46:28 by sheferna          #+#    #+#             */
/*   Updated: 2023/07/18 21:06:06 by sheferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
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

	char dest[100] = "Hello ";
	char dest1[100] = "Hello ";
	char src[] = "World";

	str = ft_strcat(dest, src);
	str1 = strcat(dest1, src);
	i = 0;
	write(1, "The ft_strcat output: ", 22);
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	j = 0;
	write(1, "\nThe strcat output: ", 21);
	while (str1[j])
	{
		write(1, &str1[j], 1);
		j++;
	}
	return (0);
}*/