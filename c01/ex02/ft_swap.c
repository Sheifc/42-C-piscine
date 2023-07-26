/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheferna <sheferna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 19:05:56 by sheferna          #+#    #+#             */
/*   Updated: 2023/07/26 19:51:58 by sheferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	var;

	var = *a;
	*a = *b;
	*b = var;
}

/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 3;
	b = 4;
	ft_swap (&a, &b);
	printf("Los números son: %d, %d", a, b);
	return (0);
}
*/