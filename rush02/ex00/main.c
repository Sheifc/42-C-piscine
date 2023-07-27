/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheferna <sheferna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 17:14:29 by sheferna          #+#    #+#             */
/*   Updated: 2023/07/23 18:38:37 by sheferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	gest_argv(int argc, char **argv, char **nb, char **dictpath)
{
	if (argc == 2)
	{
		*dictpath = "rush02/ex00/numbers.dict";
		*nb = argv[1];
		return (1);
	}
	else if (argc == 3)
	{
		*dictpath = argv[1];
		*nb = argv[2];
		return (1);
	}
	return (0);
}

int	test_nb(char *nb)
{
	int	i;

	i = -1;
	while (nb[++i])
		if (nb[i] < '0' || nb[i] > '9')
			return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	char	*nb;
	char	*dictpath;

	if (gest_argv(argc, argv, &nb, &dictpath) == 0 || test_nb(nb) == 0)
		ft_putstr("Error\n");
	else
		ft_putstr("Dict Error\n");
}
