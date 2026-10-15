/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wli-ting <wli-ting@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 19:00:27 by wli-ting          #+#    #+#             */
/*   Updated: 2026/04/21 17:09:08 by wli-ting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 65) || (str[i] > 90))
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>
int	main()
{
	char str[] = "";
	char str1[] = "uehfwajj";
	char str2[] = "AHWDHJKF";
	char str3[] = "#$%^&^&*";
	char str4[] = "GDAJD283";

	printf("Empty = %d\n", ft_str_is_uppercase(str));
	printf("Lwrcase = %d\n", ft_str_is_uppercase(str1));
	printf("Uprcase = %d\n", ft_str_is_uppercase(str2));
	printf("Special = %d\n", ft_str_is_uppercase(str3));
	printf("Alpha + Num = %d\n", ft_str_is_uppercase(str4));
}*/
