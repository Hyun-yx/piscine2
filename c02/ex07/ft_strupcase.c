/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wli-ting <wli-ting@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 14:58:35 by wli-ting          #+#    #+#             */
/*   Updated: 2026/04/21 17:12:40 by wli-ting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*#include <stdio.h>
int	main()
{
	char str1[] = "hsihd";
	char str2[] = "HSuhs";
	char str3[] = "23jsi";

	ft_strupcase(str1);
	ft_strupcase(str2);
	ft_strupcase(str3);

	printf("lwrcase = %s\n", str1);
	printf("Upr + lwrcase = %s\n", str2);
	printf("NUm + lwr = %s\n", str3);
}*/
