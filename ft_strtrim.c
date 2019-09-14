/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilbur <mwilbur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 20:49:32 by mwilbur           #+#    #+#             */
/*   Updated: 2019/09/14 19:24:44 by mwilbur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*src;
	char	*dst;
	int		end;
	int		counter;

	if (!s)
		return (NULL);
	counter = 0;
	src = (char*)s;
	end = ft_strlen(src);
	dst = (char*)malloc(sizeof(char) * (end + 1));
	if (!dst)
		return (NULL);
	while (*src && (*src == ' ' || *src == '\n' || *src == '\t'))
	{
		src++;
		counter++;
	}
	end--;
	while (end > 0 && (src[end] == ' ' || src[end] == '\n' || src[end] == '\t'))
		end--;
	dst = memcpy(dst, src, end - counter);
	return (dst);
}
