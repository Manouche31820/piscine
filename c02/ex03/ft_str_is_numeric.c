/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaraton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 16:55:28 by ebaraton          #+#    #+#             */
/*   Updated: 2022/02/11 11:16:56 by ebaraton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char	*str)
{
	int	valid;

	valid = 0;
	while (*str != '\0')
	{
		if ((*str >= '0' && *str <= '9'))
		valid = 0;
		else
			return (0);
		str++;
	}
	if (valid == 0)
		return (1);
	else
		return (0);
}
