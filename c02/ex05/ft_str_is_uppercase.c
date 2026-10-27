/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yixho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 19:06:56 by yixho             #+#    #+#             */
/*   Updated: 2026/10/18 17:17:00 by yixho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int     main(void)
{
	printf("empty = %d\n", ft_str_is_uppercase(""));
	printf("upcase = %d\n", ft_str_is_uppercase("ABCXYZ"));
	printf("uplowcase = %d\n", ft_str_is_uppercase("ABCxyz"));
	printf("upcaseint = %d\n", ft_str_is_uppercase("ABC123"));
	printf("int = %d\n", ft_str_is_uppercase("123"));
	return (0);
}*/
