/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilbur <mwilbur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 17:01:29 by mwilbur           #+#    #+#             */
/*   Updated: 2019/09/07 18:16:03 by mwilbur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*restrict dst, void	*restrict src, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	d = (unsigned char*)dst;
	s = (unsigned char*)s;
	i = 0;
	while (i < n && d[i] && s[i])
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
