/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yixho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 14:30:34 by yixho             #+#    #+#             */
/*   Updated: 2026/10/19 17:42:58 by yixho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
			i++;
		else
		{
			if (str[i] <= 'z' && str[i] >= 'a')
			{
				str[i] -= 32;
			}
			i++;
		}
	}
	return (str);
}
/*
int	main(void)
{
	char	eg[] = "HelloWorld!123";

	printf("results:\n");
	printf("empty %s\n", ft_strupcase(""));
	printf("normal %s\n", ft_strupcase(eg));
	return (0);
}*/
