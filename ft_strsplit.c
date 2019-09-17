/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilbur <mwilbur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 16:24:30 by mwilbur           #+#    #+#             */
/*   Updated: 2019/09/17 17:17:17 by mwilbur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int i;
	int j;
	int k;
	char **array;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	k = 0;
	while (s[k])
	{
		if (s[k] == c)
		{
			j = 0;
			i++;
		}
		array[i][j] = s[k];
		k++;
	}
	return (array);
}
