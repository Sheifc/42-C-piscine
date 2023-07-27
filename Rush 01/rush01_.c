/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheferna <sheferna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 12:31:07 by sheferna          #+#    #+#             */
/*   Updated: 2023/07/16 18:51:46 by sheferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define SIZE 4

int		board[SIZE][SIZE];

int	ft_availabilty(int row, int col, int n)
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
/* This verify if the number (n) is available in the cell */
	while (n <= SIZE)
	{
		if (ft_availability(row, col, n))
		{
			board[row][col] = n;
			if (resolution(clues, row, col + 1))
				return (1);
			else if
			{
				board[row][col] = 0;
			}
		}
		else
			return (0);
		n++;
	}
}
/* This prints the cells with the number returned by the resolution function*/
void	ft_printResolution(void)
{
	int	row;
	int	col;

	write(1, , 1);
	write(1, '\n', 1);
	row = 0;
	while (row < SIZE)
	{
		col = 0;
		while (col < SIZE)
		{
			write(1, board[row][col], 1);
			col++;
		}
		write(1, '\n', 1);
		row++;
	}
}

int	main(int argc, char *argv[])
{
	int row = 0;
	while (row < SIZE)
	{
		int col = 0;
		while (col < SIZE)
		{
			board[row][col] = 0;
			col++;
		}
		row++;
	}

	if (ft_resolution())
	{
		ft_printResolution();
	}
}