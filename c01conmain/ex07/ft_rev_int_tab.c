/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheferna <sheferna@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 16:12:52 by sheferna          #+#    #+#             */
/*   Updated: 2023/07/12 11:12:22 by sheferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int cont;
	int temp;

	cont = 0; 
	while (cont < (size / 2)) // al div size entre dos nos da x ej 5/2 = 2 cuando el cont llegue a 2, 
							  // no entra en en el bucle xq estará en la posición intermedia del array
	{
	temp = tab[cont];
	tab[cont] = tab[size-1-cont]; // size -1 es el ultimo digito y le rest cont para ir avanzando posiciones
	tab[size-1-cont] = temp;
	cont++;
	}
}

#include <stdio.h>

int	main(void)
{
	int array[4] = {1,2,3,4};
	int size;
	int i;

	size = 4; 
	i = 0;
	printf ("Array original: ");
	while (i < size) // debe ser size xq si pones size-1 nunca llegas al valor de size
	{
		printf ("%d", array [i]);
		i++;
	}

	ft_rev_int_tab(array, size);
	
	i = 0;
	printf ("\nArray modificado: ");
	while (i < size)
	{
		printf ("%d", array [i]);
		i++;
	}
	return (0);
}
