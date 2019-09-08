/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilbur <mwilbur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 19:49:05 by mwilbur           #+#    #+#             */
/*   Updated: 2019/09/08 16:09:54 by mwilbur          ###   ########.fr       */
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
	int		i;
	int		result;
	char	sign;

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
		if (sign == '+')
			result += (str[i] - '0');
		if (sign == '-')
			result -= (str[i] - '0');
		i++;
	}
	return (result);
}
