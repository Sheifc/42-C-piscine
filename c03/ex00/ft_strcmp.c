/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheferna <sheferna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 18:03:18 by sheferna          #+#    #+#             */
/*   Updated: 2023/07/20 11:56:38 by sheferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/*
#include <string.h>
#include <unistd.h>

int	main(void)
{
	int i;
	int j;
	char s1[] = "hello";
	char s2[] = "helho";

	i = ft_strcmp(s1, s2) + '0';
	j = strcmp(s1, s2) + '0';
	write(1, "The ft_strcmp output: ", 22);
	write(1, &i, 1);
	write(1, "\nThe strcmp output: ", 21);
	write(1, &j, 1);
	return (0);
}*/
