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

void	ft_print_alphabet(void)
{
	char	letra;

	while (letra <= 'z')
	{
		write(1, &letra, 1);
		letra++;
	}
}

int	main(void)
{
	ft_print_alphabet();
}
