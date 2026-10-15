/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wli-ting <wli-ting@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 17:24:29 by wli-ting          #+#    #+#             */
/*   Updated: 2026/04/23 11:57:20 by wli-ting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' && i < n - 1))
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*#include <stdio.h>
#include <string.h>
int	main()
{
	char str1[] = "42Piscine";
	char str2[] = "72Piscine";
	char str3[] = "42Poscine";
	char str4[] = "24Piscine";

	printf("s1=%s\ns2=%s\nn=%d\n", str1, str2, ft_strncmp(str1, str2, 0));
	printf("\ns1=%s\ns2=%s\nn=%d\n", str1, str3, ft_strncmp(str1, str3, 0));
	printf("\ns1=%s\ns2=%s\nn=%d\n", str1, str4, ft_strncmp(str1, str4, 0));
}*/
