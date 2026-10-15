/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yixho       <yixho@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 12:12:04 by wli-ting          #+#    #+#             */
/*   Updated: 2026/04/21 17:08:31 by wli-ting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 97 || str[i] > 122) && (str[i] < 65 || str[i] > 90))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main()
{	
	printf("%d", ft_str_is_alpha("dontdoit"));
	printf("%d", ft_str_is_alpha("kwoncoi1"));
	printf("%d", ft_str_is_alpha("103jd93"));
	printf("%d", ft_str_is_alpha("e982d93"));
	return (0);
}*/
