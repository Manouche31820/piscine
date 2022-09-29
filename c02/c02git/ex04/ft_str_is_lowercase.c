/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaraton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:29:49 by ebaraton          #+#    #+#             */
/*   Updated: 2022/02/07 18:12:28 by ebaraton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	valid;

	valid = 0;
	while (*str != '\0')
	{
		if ((*str >= 'a' && *str <= 'z'))
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
