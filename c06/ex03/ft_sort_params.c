/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaraton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 13:49:16 by ebaraton          #+#    #+#             */
/*   Updated: 2022/02/16 09:37:49 by ebaraton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *argv)
{
	int	i;

	i = 0;
	while (argv[i] != '\0')
	{
		write(1, &argv[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_cmp(char *s1, char *s2)
{
	int	x;

	x = 0;
	while (s1[x] == s2[x] && s1[x] && s2[x])
		x++;
	return (s1[x] - s2[x]);
}

void	ft_sort(int ac, char **argv)
{
	char	*tmp[1];
	int		i;
	int		x;
	int		ac2;

	x = 1;
	i = 0;
	ac2 = ac;
	while (ac2-- > 1)
	{		
		while (ac-- > 1)
		{
			if (ft_cmp(argv[x], argv[x + i]) > 0)
			{
				tmp[0] = argv[x];
				argv[x] = argv [x + i];
				argv [x + i] = tmp[0];
			}	
			i++;
		}
		ac = (ac2);
		ft_putchar(argv[x]);
		i = 0;
		x++;
	}
}

int	main(int ac, char **argv)
{	
	ft_sort(ac, argv);
	return (0);
}
