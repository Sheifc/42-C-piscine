/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheferna <sheferna@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 17:47:26 by sheferna          #+#    #+#             */
/*   Updated: 2023/07/12 11:45:28 by sheferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int aux;
	int i;

	i = 0;
	while (i+1 < size)
	{
		if (tab[i] > tab[i+1]) // entrara en bucle para hacer un swap si los numeros q compara cumplen esta condicion 
		{
			aux = tab[i];
			tab[i] = tab[i+1];
			tab[i+1] = aux;
			if (i != 0) //si el contador es distinto de cero pasa a i--
			i--; // esto hace que reste posiciones al contador para que se vuelvan a comparar los elementos al haber hecho un swap
		}
		else
			i++; //si los elementos estan en orden creciente, se suma al cont uno y va avanzando hasta q la condicion se cumpla
	}
}

#include <stdio.h>

int main (void)
{
	int array[10] = {10,2,3,6,5,9,7,8,23,4};
	int size;
	int i; 

	size = 10;
	i = 0;
	printf("El array original es: ");
	while (i < size)
	{
		printf("%d", array[i]);
		i++;
	}

	ft_sort_int_tab(array, size);

	i = 0; 
	printf("\nEl array ordenado en orden creciente: ");
	while (i < size)
	{
		printf("%d ", array[i]);
		i++;
	}
	return (0);
}
