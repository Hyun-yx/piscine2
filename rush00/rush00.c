/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yixho <yixho@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 12:16:35 by yixho             #+#    #+#             */
/*   Updated: 2026/10/11 11:12:54 by yixho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush(int x, int y)
{
	int	r;
	int	c;

	r = 0;
	while (r < y)
	{
		c = 0;
		while (c < x)
		{
			if ((r == 0 || r == y - 1) && (c == 0 || c == x - 1))
				ft_putchar('o');
			else if (r == 0 || r == y - 1)
				ft_putchar('-');
			else if (c == 0 || c == x - 1)
				ft_putchar('|');
			else
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		r++;
	}
}
