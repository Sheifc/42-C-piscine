/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheferna <sheferna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 16:30:16 by sheferna          #+#    #+#             */
/*   Updated: 2023/07/24 20:33:58 by sheferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	check_base(char *base)
{
	int	size_base;
	int	i;
	int	j;

	i = 0;
	size_base = ft_strlen(base);
	if (size_base == 0 || size_base == 1)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32
			|| (base[i] >= 127) || (base[i] >= 9 && base[i] <= 13))
			return (0);
		j = i + 1;
		while (j < size_base)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_putnbr(int result, char *base)
{
	char	check;
	int		size_base;
	long	res;

	res = (long)result;
	size_base = ft_strlen(base);
	check = check_base(base);
	if (check == 1)
	{
		if (res < 0)
		{
			write(1, "-", 1);
			res *= -1;
		}
		if (res >= size_base)
		{
			ft_putnbr(res / size_base, base);
			ft_putnbr(res % size_base, base);
		}
		if (res < size_base)
			return (base[res]);
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	final;

	result = ft_atoi(str);
	final = ft_putnbr(result, base);
	return (final);
}

/*
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	int res;
	int expected;

	printf("42:%d\n", ft_atoi_base("2a", "0123456789abcdef"));
	printf("-42:%d\n", ft_atoi_base("   --------+-2a", "0123456789abcdef"));
	printf("42:%d\n", ft_atoi_base("   -+-2a", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+- 2a", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+-g", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", ""));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "0"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "+-0"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "\t01"));
	res = ft_atoi_base(" \v7fffffff", "0123456789abcdef");
	printf("%d : %d (equals: %i)\n", INT_MAX, res, INT_MAX == res);
	res = ft_atoi_base(" \f-80000000", "0123456789abcdef");
	printf("%d : %d (equals: %i)\n", INT_MIN, res, INT_MIN == res);
	res = ft_atoi_base("ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZXEFnoY$",
			"ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba9876543210");
	printf("%d : %d (equals: %i)\n", INT_MAX, res, INT_MAX == res);

	res = ft_atoi_base("-~~~~~~~~'~~~~~~'~'~~~'''''''~~'$", "'~");
	expected = -2143247366;
	printf("%d : %d (equals: %i)\n", expected, res, expected == res);
}*/