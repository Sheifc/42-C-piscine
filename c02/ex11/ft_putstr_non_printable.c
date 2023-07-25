/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheferna <sheferna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:19:51 by sheferna          #+#    #+#             */
/*   Updated: 2023/07/17 16:44:25 by sheferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_hex(int nb)
{
	char	*hex;

	hex = "0123456789abcdef";
	write(1, "\\", 1);
	if (nb >= 16)
	{
		write(1, &hex[nb / 16], 1);
		write(1, &hex[nb % 16], 1);
	}
	else
	{
		write(1, "0", 1);
		write(1, &hex[nb], 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 31 || str[i] >= 127)
		{
			ft_hex((unsigned char)str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
/*
int	main(void)
{
	// printf("\n::%d::\n", nb);

	char str[] = "hola que \n\t\vtalñ";
	ft_putstr_non_printable(str);
}
*/