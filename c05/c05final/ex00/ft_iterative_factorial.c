/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaraton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:51:32 by ebaraton          #+#    #+#             */
/*   Updated: 2022/02/14 16:36:45 by ebaraton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	tmp;

	tmp = nb - 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (tmp > 1)
	{
		nb = nb * tmp ;
		tmp--;
	}
	return (nb);
}
/*
int main()
{
	printf("%d", ft_iterative_factorial(nb));
	return (0);
}*/
