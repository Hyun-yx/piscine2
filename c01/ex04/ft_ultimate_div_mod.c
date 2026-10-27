/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yixho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 16:20:46 by yixho             #+#    #+#             */
/*   Updated: 2026/10/06 18:00:18 by yixho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tempa;
	int	tempb;

	tempa = *a / *b;
	tempb = *a % *b;
	*a = tempa;
	*b = tempb;
}
/*
int main(void)
{
	int	a;
	int	b;

	a = 42;
	b = 67;
	ft_ultimate_div_mod(&a, &b);
	printf("a = %d, b = %d", a, b);
	return (0);
}*/
