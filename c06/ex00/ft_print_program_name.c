/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaraton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 10:17:59 by ebaraton          #+#    #+#             */
/*   Updated: 2022/02/16 17:36:54 by ebaraton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	x;

	(void) ac;
	x = 0;
	while (av[0][x])
	{
		write (1, &av[0][x], 1);
		x++;
	}
	write (1, "\n", 1);
	return (0);
}
