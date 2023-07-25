/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheferna <sheferna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 20:57:49 by jamedina          #+#    #+#             */
/*   Updated: 2023/07/09 16:37:36 by sheferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_putchar.c"

void	long_x(int x)
{
	int	i;

	i = 0;
	if (x > 1)
	{
		while (i < (x - 2))
		{
			ft_putchar('-');
			i++;
		}
		ft_putchar('o');
		ft_putchar('\n');
	}
}

void	ft_longy(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < (y - 2))
	{
		ft_putchar('|');
		while (i <= (x - 3))
		{
			ft_putchar(' ');
			i++;
		}
		i = 0;
		ft_putchar('|');
		ft_putchar('\n');
		j++;
	}	
}

void	long_y(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (x > 1)
	{
		ft_longy(x, y);
	}
	else
	{
		while (j < (y - 2))
		{
			ft_putchar('\n');
			ft_putchar('|');
			j++;
		}
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (x == 1 && y == 1)
	{
		ft_putchar('o');
	}
	if (x > 1 || y > 1)
	{
		ft_putchar('o');
		long_x(x);
		long_y(x, y);
		if (y > 1)
		{
			ft_putchar('o');
			long_x(x);
		}
	}
}
