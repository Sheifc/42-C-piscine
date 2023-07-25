/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheferna <sheferna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 13:33:47 by sheferna          #+#    #+#             */
/*   Updated: 2023/07/20 11:57:17 by sheferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n < 1)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <string.h>
#include <unistd.h>

int	main(void)
{
	int i;
	int j;
	char s1[] = "helln";
	char s2[] = "hellx";

	i = ft_strncmp(s1, s2, 4) + '0';
	j = strncmp(s1, s2, 4) + '0';
	write(1, "The ft_strncmp output: ", 23);
	write(1, &i, 1);
	write(1, "\nThe strncmp output: ", 22);
	write(1, &j, 1);
	return (0);
}*/
