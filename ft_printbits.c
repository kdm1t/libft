/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printbits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilbur <mwilbur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 21:08:14 by mwilbur           #+#    #+#             */
/*   Updated: 2019/09/19 21:45:12 by mwilbur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_printbits(unsigned char c)
{
	int i;

	i = 128;
	while (i > 0)
	{
		if (c - i >= 0)
		{
			write(1, "1", 1);
			c -= i;
			i /= 2;
		}
		else
		{
			write(1, "0", 1);
			i /= 2;
		}
	}
	return (0);
}
