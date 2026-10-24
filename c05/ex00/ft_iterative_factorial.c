/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yixho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 17:44:28 by yixho             #+#    #+#             */
/*   Updated: 2026/10/24 16:31:13 by yixho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	while (nb > 0)
	{
		i = i * nb;
		nb--;
	}
	return (i);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	char	nb;

	if(ac != 2)
		return (0);

	nb = av[1][0] - '0';
	printf("%d", ft_iterative_factorial(nb));
	return (0);
}*/
