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
#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
		while(s1[i] != '\0')
		{
			i++;
		}
		while(s2[i] != '\0')
		{
			i++;
		}
		return (s1[i] - s2[i]);
}

int	main(void)
{
	char	i[] = "i love segfault";
	char	j[] = "i love segfault";

	printf("res = %d", ft_strcmp(i, j));
	return (0);
}
