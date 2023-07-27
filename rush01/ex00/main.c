/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheferna <sheferna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 17:35:05 by sheferna          #+#    #+#             */
/*   Updated: 2023/07/16 18:06:49 by sheferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define SIZE 4

int		board[SIZE][SIZE];

int	ft_availability(int row, int col, int n)
{
	int	i;

	i = 0;
	while (i < SIZE)
	{
		if (board[row][i] == n || board[i][col] == n)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_resolution(int clues[], int row, int col)
{
	int	n;

	while (row < SIZE)
	{
		if (col == SIZE)
		{
			col = 0;
			row++;
		}
		if (board[row][col] == 0)
		{
			break ;
		}
		col++;
	}
	if (row == SIZE)
	{
		return (1);
	}
	n = 1;
	while (n <= SIZE)
	{
		if (ft_availability(row, col, n))
		{
			board[row][col] = n;
			if (ft_resolution(clues, row, col + 1))
				return (1);
			else
			{
				board[row][col] = 0;
			}
		}
		n++;
	}
	return (0);
}

void	ft_printResolution(void)
{
	char	buffer[2];
	int	row;
	int	col;

	buffer[1] = ' ';
	row = 0;
	while (row < SIZE)
	{
		col = 0;
		while (col < SIZE)
			buffer[0] = '0' + board[row][col];
		{
			write(1, buffer, 2);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}

int	main(int argc, char *argv[])
{
	int	row;
	int	col;

	row = 0;
	while (row < SIZE)
	{
		col = 0;
		while (col < SIZE)
		{
			board[row][col] = 0;
			col++;
		}
		row++;
	}
	if (ft_resolution(NULL, 0, 0))
	{
		ft_printResolution();
	}
	return (0);
}
