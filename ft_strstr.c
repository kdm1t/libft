/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilbur <mwilbur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 16:47:01 by mwilbur           #+#    #+#             */
/*   Updated: 2019/09/08 17:03:26 by mwilbur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (haystack[i])
	{
		while(needle[j] && haystack[i + j] == needle[j])
			i++;
		if (needle[j] == '\0')
			return ((char*)&haystack[i]);
		i++;
	}
	return (0);
}