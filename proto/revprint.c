/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revprint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yixho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 16:36:32 by yixho             #+#    #+#             */
/*   Updated: 2026/10/24 16:44:45 by yixho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*rev(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		i++;
		j = i;
	}
	while (str[j] >= 0)
		j--;
	return (&str[j]);
}

int	main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	printf("%s", rev(av[1]));
	return (0);
}
