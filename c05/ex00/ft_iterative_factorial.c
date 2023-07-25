/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheferna <sheferna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 12:31:19 by sheferna          #+#    #+#             */
/*   Updated: 2023/07/25 17:47:14 by sheferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
    int factorial;

    if (nb < 0 || nb > 12)
        return (0);
    if (nb == 0)
        return (1);
    factorial = 1;
    while (nb > 0)
    {
        factorial = factorial * nb;
        nb--;
    }
    return (factorial);
}
#include <stdio.h>
int main(void)
{
    printf("%d", ft_iterative_factorial(4));
}