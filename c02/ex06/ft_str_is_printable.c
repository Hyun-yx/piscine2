/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wli-ting <wli-ting@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 14:00:26 by wli-ting          #+#    #+#             */
/*   Updated: 2026/04/20 20:15:21 by wli-ting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && (str[i] <= 126)))
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>
int	main()
{
	char str1[] = "Hello";
	char str2[] = "123}*";
	char str3[] = "hISIa\n";
	char str4[] = "";
	char str5[] = " ";

	printf("Upr + Lwr = %d\n", ft_str_is_printable(str1));
	printf("Num = %d\n", ft_str_is_printable(str2));
	printf("/n = %d\n", ft_str_is_printable(str3));
	printf("Empty = %d\n", ft_str_is_printable(str4));
	printf("Space = %d\n", ft_str_is_printable(str5));
}*/
