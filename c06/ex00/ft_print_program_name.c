/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheferna <sheferna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 21:08:51 by sheferna          #+#    #+#             */
/*   Updated: 2023/07/25 12:18:08 by sheferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (i < argc)
	{
		while ( argv[0][i])
		{
			write (1, &argv[0][i++], 1);
		}	
	}
    write (1, "\n", 1);
	return (0);
}