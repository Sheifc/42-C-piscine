/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheferna <sheferna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 19:41:17 by sheferna          #+#    #+#             */
/*   Updated: 2023/07/26 19:52:17 by sheferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>

int	main(void)
{
	int a;
	int b;
	int c;
	int d;

	a = 4;
	b = 2;
	ft_div_mod(a, b, &c, &d);
	printf("El resultado es: %d, %d", c, d);
	return (0);
}
*/