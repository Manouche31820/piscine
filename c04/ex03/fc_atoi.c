/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoitry.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaraton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:30:27 by ebaraton          #+#    #+#             */
/*   Updated: 2022/02/16 16:57:12 by ebaraton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int atoi;
	int signe;

	signe = 1;
	atoi = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
		{
			signe = signe * -1;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			while (str[i] >= '0' && str[i] <= '9')
			{
				atoi = ((atoi * 10) + str[i] - '0');
				i++;
			}
			break ;
		}
		else if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\r' && str[i] != '\v' && str[i] != '\f' && str[i] != '+')
			break ;
		i++;
	}
	return (atoi * signe);
}

/*int	main()
{
	char	*str;
	
	str = "  --5546-1dd45sf";
	printf("%d\n", ft_atoi(str));
	return (0);
}*/
