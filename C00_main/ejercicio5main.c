/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ejercicio1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheferna <sheferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:44:15 by sheferna          #+#    #+#             */
/*   Updated: 2023/07/05 15:36:19 by sheferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb(void)
{
	int a;
	int b; 
	int c;
	
	a = '0';
	while (a <= '7')
	{
	b = a+1; 

	while (b <= '8')
	{
		c = b+1;

		while (c <= '9')
		{
			write(1, &a, 1); 
			write(1, &b, 1);
			write(1, &c, 1);
			write(1, ", ", 2); 
			c++;
		}
		b++;
	}
	a++;
}
}

int main (void)
{
	ft_print_comb();
}
