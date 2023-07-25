/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheferna <sheferna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:22:18 by sheferna          #+#    #+#             */
/*   Updated: 2023/07/18 19:58:21 by sheferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < nb)
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

	str = ft_strncat(dest, src, 0);
	str1 = strncat(dest1, src, 0);
	i = 0;
	write(1, "The ft_strncat output: ", 23);
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	j = 0;
	write(1, "\nThe strncat output: ", 22);
	while (str[j])
	{
		write(1, &str1[j], 1);
		j++;
	}
	return (0);
}*/
