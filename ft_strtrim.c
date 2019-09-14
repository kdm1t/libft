/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilbur <mwilbur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 20:49:32 by mwilbur           #+#    #+#             */
/*   Updated: 2019/09/13 21:04:09 by mwilbur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		start;
	int		end;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	start = 0;
	end = ft_strlen(s);
	str = (char*)malloc(sizeof(char) * (end + 1));
	if (!str)
		return (NULL);
	while (s[start] && (s[start] == ' ' || s[start] == '\n' || s[start] == '\t'))
		start++;
	while (end > 0 && (s[end] == ' ' || s[end] == '\n' || s[end] == '\t'))
		end--;
	while (start < end)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	return (str);
}
