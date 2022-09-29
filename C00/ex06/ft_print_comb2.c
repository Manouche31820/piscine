/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaraton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 19:01:51 by ebaraton          #+#    #+#             */
/*   Updated: 2022/02/01 11:16:48 by ebaraton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int a1, int a2, int b1, int b2)
{
	write (1, &a1, 1);
	write (1, &a2, 1);
	write (1, " ", 1);
	write (1, &b1, 1);
	write (1, &b2, 1);
	if (!(a1 == '9' && a2 == '8'))
		write (1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar(a / 10 + '0', a % 10 + '0', b / 10 + '0', b % 10 + '0');
			b++;
		}
	a++;
	}	
}
