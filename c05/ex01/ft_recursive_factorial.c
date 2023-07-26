/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheferna <sheferna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 18:49:51 by sheferna          #+#    #+#             */
/*   Updated: 2023/07/26 16:41:49 by sheferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	factorial;

	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	factorial = 1;
	return (nb * ft_recursive_factorial(nb - 1));
}
