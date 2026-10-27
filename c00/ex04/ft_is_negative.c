/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yixho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 10:52:24 by yixho             #+#    #+#             */
/*   Updated: 2026/10/08 10:56:10 by yixho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	ne;
	char	po;

	ne = 'N';
	po = 'P';
	if (n >= 0)
	{
		write(1, "P", 1);
	}
	else
	{
		write(1, "N", 1);
	}
}
/*
int main(void)
{
	ft_is_negative(23);
	ft_is_negative(-12);
	ft_is_negative(0);
	return (0);
}*/
