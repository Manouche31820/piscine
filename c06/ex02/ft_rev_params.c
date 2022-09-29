/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaraton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:07:50 by ebaraton          #+#    #+#             */
/*   Updated: 2022/02/16 09:37:14 by ebaraton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	x;
	int	y;

	x = 0;
	y = ac - 1;
	while (y > 0)
	{
		while (av[y][x])
		{
			write (1, &av[y][x], 1);
			x++;
		}
		x = 0;
		write (1, "\n", 1);
		y--;
	}
	return (0);
}
