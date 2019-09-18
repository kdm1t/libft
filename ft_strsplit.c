/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilbur <mwilbur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 16:24:30 by mwilbur           #+#    #+#             */
/*   Updated: 2019/09/18 17:47:30 by mwilbur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strlen_delimiter(char **s, char c)
{
	int counter;

	counter = 0;
	if (!s || !c)
		return (0);
	while (**s == c)
		(*s)++;
	while ((*s)[counter] && (*s)[counter] != c)
		counter++;
	return (counter);
}

static char	*ft_strcpy_delimiter(char *dst, char *src, char c)
{
	int i;

	i = 0;
	while (src[i] == c)
		i++;
	while (src[i] && src[i] != c)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char		**ft_strsplit(char const *s, char c)
{
	int i;
	char *str;
	char **array = NULL;

	if (!s)
		return (NULL);
	i = 0;
	str = (char*)s;
	array = (char**)ft_memalloc(sizeof(char*) * (ft_wordscounter(s, c) + 1));
	if (!array)
		return (NULL);
	while (array[i])
	{
		array[i] = ft_strnew(ft_strlen_delimiter(&str, c));
		array[i] = ft_strcpy_delimiter(array[i], str, c);
		i++;
	}
	return (array);
}
