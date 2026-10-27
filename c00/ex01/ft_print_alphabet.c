/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yixho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 17:47:32 by yixho             #+#    #+#             */
/*   Updated: 2026/10/05 18:07:23 by yixho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	ltr;

	ltr = 'a';
	while (ltr <= 'z')
	{
		write(1, &ltr, 1);
		ltr++;
	}
}
/*int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/
