/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yixho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 18:43:41 by yixho             #+#    #+#             */
/*   Updated: 2026/10/10 18:43:46 by yixho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && i < n)
	{
		i++;
	}
	while (s2[i] != '\0' && i < n)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	int		n;
	char	a[] = "i love segfault";
	char	b[] = "i luv segfault";

	n = 3;
	printf("res = %d", ft_strncmp(a, b, n));
	return (0);
}*/
