/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaraton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:43:57 by ebaraton          #+#    #+#             */
/*   Updated: 2022/02/16 09:40:49 by ebaraton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		x;
	char	*dest;

	x = 0;
	while (src[x])
	x++;
	dest = malloc(sizeof(char) * (x + 1));
	x = 0;
	while (src [x])
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
/*
int	main()
{
	char	*src;
	char	*res;
	src = "Salut les bougz";
	res = ft_strdup(src);	
	printf("%s", res);
	free(res);
	return (0);
}*/
