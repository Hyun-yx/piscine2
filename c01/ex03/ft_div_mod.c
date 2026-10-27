/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yixho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 14:52:10 by yixho             #+#    #+#             */
/*   Updated: 2026/10/08 17:40:39 by yixho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 42;
	b = 67;
	ft_div_mod(a, b, &div, &mod);
	printf("%d = div, %d = mod", div, mod);
	return (0);
}*/	
