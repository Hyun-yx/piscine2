/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yixho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 18:08:57 by yixho             #+#    #+#             */
/*   Updated: 2026/10/11 18:20:50 by yixho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	ltr;

	ltr = 'z';
	while (ltr >= 'a')
	{
		write(1, &ltr, 1);
		ltr --;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
}
