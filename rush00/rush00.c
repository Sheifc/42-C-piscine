/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheferna <sheferna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:45:56 by sheferna          #+#    #+#             */
/*   Updated: 2023/07/09 17:24:01 by sheferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// void ft_putchar(char c);
#include "ft_putchar.c"

void	ft_ejex(int x)
{
	int	cont;

	cont = 2;
	ft_putchar('o');
	while (cont < x)
	{
		ft_putchar('-');
		cont++;
	}
	if (x >= 2)
		ft_putchar('o');
	ft_putchar('\n');
}

void	ft_ejey(int x, int y)
{
	int	cont;

	cont = 2;
	ft_putchar('|');
	while (cont < x)
	{
		ft_putchar(' ');
		cont++;
	}
	if (x >= 2)
		ft_putchar('|');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 || y > 0)
	{
		ft_ejex(x);
		while (y > 2)
		{
			ft_ejey(x, y);
			y--;
		}
	}
	if (y >= 2)
		ft_ejex(x);
}
