/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wli-ting <wli-ting@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 21:41:12 by wli-ting          #+#    #+#             */
/*   Updated: 2026/04/19 21:16:16 by wli-ting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0'))
	{
		i++;
	}
	return ((unsigned char) s1[i] - (unsigned char)s2[i]);
}

/*#include <stdio.h>
#include <string.h>
int	main()
{
	char *s1 = "The pig died.";
	char *s2 = "The pig diee.";
	int res = ft_strcmp(s1, s2);

	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%d\n", res);
}*/
