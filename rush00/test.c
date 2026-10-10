/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yixho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 12:46:47 by yixho             #+#    #+#             */
/*   Updated: 2026/10/10 12:50:54 by yixho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
        write(1, &c, 1);
} 

void    rush(int x, int y)
{
        int     r;
        int     c;

        r = 0;
        while (r <= y - 1)
        {
                c = 0;
                if (r == 0 || r == y - 1)
                {
                        while (c <= x - 1)
                        {
                                if(c == 0 || c == x - 1)
                                {
                                        ft_putchar('o');
                                }
                                else
                                {
                                        ft_putchar('-');
                                }
                                c++;
                        }

                }
                else
                {
                        while (c <= x - 1)
                        {
                                if(c == 0 || c == x - 1)
                                {
                                        ft_putchar('|');
                                }
                                else
                                {
                                        ft_putchar(' ');
                                }
                                c++;
                        }
                }
                ft_putchar('\n');
                r++;
        }
}

int     main(void)
{
        rush(10, 10);
        return (0);
}
