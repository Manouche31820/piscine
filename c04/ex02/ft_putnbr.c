/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaraton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:27:15 by ebaraton          #+#    #+#             */
/*   Updated: 2022/02/14 09:54:24 by ebaraton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int nb)
{
	char	c;

	c = nb + '0';
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{	
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{	
		nb = nb * -1;
		write (1, "-", 1);
	}	
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10);
}
/*int	main()
{
	int	n;

	n = -21;
	ft_putnbr(n);
	return(0);
}*/
