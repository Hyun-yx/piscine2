/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yixho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 17:31:39 by yixho             #+#    #+#             */
/*   Updated: 2026/10/20 17:49:05 by yixho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	res;

	i = 0;
	neg = 1;
	res = 0;
	while ((str[i] == ' ') || (str[i] <= 13 && str[i] >= 9))
		i++;
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			neg = neg * -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		res = res * 10 +(str[i] - '0');
		i++;
	}
	return (res * neg);
}
/*
int main (int ac, char **av)
{
	if (ac != 2)
		return (0);
	ft_atoi(av[1]);
	printf("%d", ft_atoi(av[1]));
	return (0);
}*/	
