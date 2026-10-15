/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yixho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 18:43:41 by yixho             #+#    #+#             */
/*   Updated: 2026/10/10 18:43:46 by yixho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	while (dest[j] != '\0')
	{
		dest[j+i] = src[j];
		j++;
	}
	dest[j+i] = '\0';
	return (dest);
}

int	main(void)
{
	char	a[20] = "hello";
	char	b[] = "world";

	printf("cat = %s", ft_strcat(a, b));
	return (0);
}
