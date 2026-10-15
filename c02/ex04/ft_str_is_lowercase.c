/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yixho <yixho@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 17:52:03 by yixho             #+#    #+#             */
/*   Updated: 2026/04/21 17:08:55 by yixho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 97) && (str[i] <= 122))
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>
int	main()
{
	printf("%d\n", ft_str_is_lowercase(""));
	printf("%d\n", ft_str_is_lowercase("ABC1YZ"));
	printf("%d\n", ft_str_is_lowercase("abc1yz"));
	printf("%d\n", ft_str_is_lowercase("ABCXYZ"));
	printf("%d\n", ft_str_is_lowercase("abcxyz"));
	return (0);
}
