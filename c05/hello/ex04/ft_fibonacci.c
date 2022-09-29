/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaraton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 09:08:47 by ebaraton          #+#    #+#             */
/*   Updated: 2022/02/14 18:11:54 by ebaraton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index)
{	
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index >= 2)
	{
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
	}
	else
		return (index);
}
/*
int	main ()
{
	printf("%d", ft_fibonacci(2));
}*/
