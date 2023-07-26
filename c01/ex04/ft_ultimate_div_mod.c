/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheferna <sheferna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 11:17:14 by sheferna          #+#    #+#             */
/*   Updated: 2023/07/26 19:52:53 by sheferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = *a / *b;
	d = *a % *b;
	*a = c;
	*b = d;
}

/*
#include <stdio.h>
int	main(void)
{
	int c;
	int d; 
	int *a; 
	int *b; 

	c = 6; 
	d = 4; 

	a = &c; // asi indico que el puntero a apunte la direccion de c
	b = &d;
	ft_ultimate_div_mod(a, b); // le paso los punteros
	printf("El resultado de la división y el resto son: %d, %d", *a, *b);
	return (0); 
}
*/