/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yixho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 13:08:46 by yixho             #+#    #+#             */
/*   Updated: 2026/10/19 14:28:46 by yixho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] <= 126 && str[i] >= 32))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("results:\n");
	printf("nonprintble %d\n", ft_str_is_printable("\a"));
	printf("printable %d\n", ft_str_is_printable("HelloWorld!1234"));
	printf("empty %d\n", ft_str_is_printable(""));
	return (0);
}*/
