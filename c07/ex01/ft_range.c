/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaraton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:49:40 by ebaraton          #+#    #+#             */
/*   Updated: 2022/02/16 19:26:36 by ebaraton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	tab = malloc(sizeof(int) * (max - min));
	if (min >= max)
		return (NULL);
	i = 0;
	while (max - min > 0)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
