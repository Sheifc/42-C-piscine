/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheferna <sheferna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 20:15:09 by sheferna          #+#    #+#             */
/*   Updated: 2023/07/24 20:32:51 by sheferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	res;
	int	parity;

	res = 0;
	parity = 0;
	res = parity;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			parity++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	if (parity % 2 == 0)
		return (res);
	return (-res);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argcv)
{
	int mine;
	int theirs;
	if (argc == 2)
	{
		mine = ft_atoi(argcv[1]);
		theirs = atoi(argcv[1]);
		printf("mine: %d | theirs: %d\n", mine, theirs);
	}
	// char str[] = "     1---+--+1234ab567";
	// printf("%d", ft_atoi(str));
	return (0);
}

int	main(void)
{
	char *str = "    ---+--+1234ab567";
	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
}*/