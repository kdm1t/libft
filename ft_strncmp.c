/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilbur <mwilbur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 17:05:46 by mwilbur           #+#    #+#             */
/*   Updated: 2019/09/09 17:34:27 by mwilbur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*first;
	unsigned char	*second;

	i = 0;
	first = (unsigned char*)s1;
	second = (unsigned char*)s2;
	if (n == 0)
		return (0);
	while (first[i] && second[i] && i < n)
	{
		if (first[i] != second[i])
			return (first[i] - second[i]);
		i++;
	}
	if ((!first[i] && second[i]) || (first[i] && !second[i]))
		return (first[i] - second[i]);
	return (0);
}
