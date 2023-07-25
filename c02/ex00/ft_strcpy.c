/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheferna <sheferna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 10:50:20 by sheferna          #+#    #+#             */
/*   Updated: 2023/07/18 20:20:00 by sheferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
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

	char dest[100];
	char dest1[100];
	char src[] = "Hello";

	str = ft_strcpy(dest, src);
	str1 = strcpy(dest1, src);
	i = 0;
	write(1, "The ft_strcpy output: ", 22);
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	j = 0;
	write(1, "\nThe strcpy output: ", 21);
	while (str1[j])
	{
		write(1, &str1[j], 1);
		j++;
	}
	return (0);
}*/