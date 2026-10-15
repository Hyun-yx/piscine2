/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wli-ting <wli-ting@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 15:03:25 by wli-ting          #+#    #+#             */
/*   Updated: 2026/04/23 15:18:45 by wli-ting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < nb && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <string.h>
#include <stdio.h>
int	main()
{
	char str1[20] = "Oni";
	char str2[] = "giri";
	char str3[20] = "Oni";

	printf("Recreated = %s\n", ft_strncat(str1, str2, 4));
	printf("Original  = %s\n", strncat(str3, str2, 4));
}
