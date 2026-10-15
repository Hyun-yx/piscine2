/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wli-ting <wli-ting@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 15:30:23 by wli-ting          #+#    #+#             */
/*   Updated: 2026/04/21 17:12:54 by wli-ting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		while ((str[i] >= 65) && (str[i] <= 90))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*#include <stdio.h>
int	main()
{
	char str1[] = "HELLO";
	char str2[] = "udDAI";
	char str3[] = "28hWQ";

	printf("Upr = %s\n", ft_strlowcase(str1));
	printf("Upr + Lwr = %s\n", ft_strlowcase(str2));
	printf("Num + Alpha = %s\n", ft_strlowcase(str3));
}*/
