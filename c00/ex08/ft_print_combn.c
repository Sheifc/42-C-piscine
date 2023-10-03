/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheferna <sheferna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 10:18:13 by sheferna          #+#    #+#             */
/*   Updated: 2023/07/17 10:46:18 by sheferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn_recursive(int n, int start, int num, int arr[])
{
	int	i;

	i = 0;
	if (n == 0)
	{
		while (i < num)
		{
			ft_putchar(arr[i] + '0');
			i++;
		}
		if (arr[0] != 10 - num)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		return ;
	}
	i = start;
	while (i <= 9)
	{
		arr[num] = i; 
		ft_print_combn_recursive(n - 1, i + 1, num + 1, arr);
		i++;
	}
}

// Add the digit 'i' to the 'arr' array at index 'num'
void	ft_print_combn(int n)
{
	int	arr[10];

	ft_print_combn_recursive(n, 0, 0, arr);
}
/*
int main(void)
{
    ft_print_combn(2);
    return (0);
}*/
