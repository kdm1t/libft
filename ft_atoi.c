/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilbur <mwilbur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 19:49:05 by mwilbur           #+#    #+#             */
/*   Updated: 2019/09/17 17:49:21 by mwilbur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ignorespaces(const char *str)
{
	int i;

	i = 0;
	while (str[i] && (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' ||
	str[i] == '\f' || str[i] == '\r' || str[i] == ' '))
		i++;
	return (i);
}

int			ft_atoi(const char *str)
{
	int				i;
	unsigned long	result;
	char			sign;

	i = 0;
	result = 0;
	sign = '+';
	i = ft_ignorespaces(str);
	if (str[i] == '+' && str[i + 1] >= '0' && str[i + 1] <= '9')
		i++;
	if (str[i] == '-' && str[i + 1] >= '0' && str[i + 1] <= '9')
	{
		sign = '-';
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
			result += (str[i] - '0');
		i++;
	}
	if (result > 9223372036854775808ULL && sign == '-')
		return (0);
	if (result > 9223372036854775807ULL && sign == '+')
		return (-1);
		if (sign == '-')
			return ((int)result * -1);
	return ((int)result);
}
