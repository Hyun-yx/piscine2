/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yixho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 17:06:48 by yixho             #+#    #+#             */
/*   Updated: 2026/10/20 17:07:48 by yixho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}
}
/*
int	main(void)
{
	char	s1[] = "momonga";
	char	s2[] = "momonga";

	char	s3[] = "kingdom hearts";
	char	s4[] = "kingdum hearts";
	unsigned int 	n;

	n = 6;
	printf("Results\n");
	printf("Same = %d\n", ft_strncmp(s1, s2, n));
	printf("Diff = %d\n", ft_strncmp(s3, s4, n));
	return (0);
}*/
