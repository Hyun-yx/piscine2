/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yixho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 14:48:41 by yixho             #+#    #+#             */
/*   Updated: 2026/10/26 18:59:22 by yixho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (power > 0)
	{
		res *= nb;
		power--;
	}
	return (res);
}

#include <stdio.h>
int	main(int ac, char **av)
{
	char	num;
	char	pow;

	if(ac != 3)
		return (0);
	num = av[1][0] - '0';
	pow = av[2][0] - '0';
	printf("%d", ft_iterative_power(num, pow));
	return (0);
}
