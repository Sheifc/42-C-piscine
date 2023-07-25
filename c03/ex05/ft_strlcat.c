/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheferna <sheferna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 20:10:02 by sheferna          #+#    #+#             */
/*   Updated: 2023/07/23 17:50:59 by sheferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	i;
	unsigned int	result;

	len_dest = 0;
	len_src = 0;
	i = 0;
	while (dest[len_dest])
		len_dest++;
	while (src[len_src])
		len_src++;
	if (len_dest < size)
		result = (len_dest + len_src);
	else
		result = (len_src + size);
	while (src[i] && (len_dest + 1) < size)
	{
		dest[len_dest] = src[i];
		len_dest++;
		i++;
	}
	dest[len_dest] = '\0';
	return (result);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[] = "hola";
	char	src[] = "que tal";
	printf("%u", ft_strlcat(dest, src, 2));
	printf("\n%lu\n", strlcat(dest, src, 2));
}*/
