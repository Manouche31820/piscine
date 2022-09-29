/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaraton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:40:53 by ebaraton          #+#    #+#             */
/*   Updated: 2022/02/14 16:33:44 by ebaraton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power > 0)
	{
		nb = nb * ft_recursive_power(nb, power - 1);
		return (nb);
	}
	else
		return (0);
}
/*
int	main()
{
	printf("%d\n", ft_recursive_power(10, 3));
	return(0);
	}*/
