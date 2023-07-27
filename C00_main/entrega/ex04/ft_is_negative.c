/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheferna <sheferna@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 10:13:59 by sheferna          #+#    #+#             */
/*   Updated: 2023/07/08 10:14:08 by sheferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	positivo;
	char	negativo;

	positivo = 'P';
	negativo = 'N';
	if (n < 0)
	{
		write(1, &negativo, 1);
	}
	else
	{
		write(1, &positivo, 1);
	}
}
