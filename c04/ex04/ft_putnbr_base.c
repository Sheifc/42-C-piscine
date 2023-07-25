/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheferna <sheferna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 18:44:04 by sheferna          #+#    #+#             */
/*   Updated: 2023/07/24 16:41:59 by sheferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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
			|| (base[i] >= 127))
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

void	ft_putnbr_base(int nbr, char *base)
{
	int		size_base;
	char	check;
	long	nb;

	nb = (long)nbr;
	size_base = ft_strlen(base);
	check = check_base(base);
	if (check == 1)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		if (nb >= size_base)
		{
			ft_putnbr_base(nb / size_base, base);
			ft_putnbr_base(nb % size_base, base);
		}
		if (nb < size_base)
			ft_putchar(base[nb]);
	}
}
/*
#include <stdio.h>

int	main(void)
{
	write(1, "42:", 3);
	ft_putnbr_base(42, "0123456789");
	write(1, "\n2a:", 4);
	ft_putnbr_base(42, "0123456789abcdef");
	write(1, "\n-2a:", 5);
	ft_putnbr_base(-42, "0123456789abcdef");
	write(1, "\n0:", 3);
	ft_putnbr_base(0, "0123456789abcdef");
	write(1, "\nINT_MAX:", 9);
	ft_putnbr_base(INT_MAX, "0123456789abcdef");
	write(1, "\nINT_MAX:", 9);
	ft_putnbr_base(INT_MAX,
		"ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba9876543210");
	write(1, "\nINT_MIN:", 9);
	ft_putnbr_base(INT_MIN, "0123456789abcdef");
	write(1, "\n-2143247366 : ", 15);
	ft_putnbr_base(INT_MIN + 4236282, "'~");
	write(1, "\n-1:", 4);
	ft_putnbr_base(-1, "0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "0");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "+-0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "\v0123456789abcdef");
}*/