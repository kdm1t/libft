/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilbur <mwilbur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 18:12:39 by mwilbur           #+#    #+#             */
/*   Updated: 2019/09/13 18:18:00 by mwilbur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strequ(char const *s1, char const *s2)
{
	int				i;
	unsigned char	*first;
	unsigned char	*second;

	i = 0;
	first = (unsigned char*)s1;
	second = (unsigned char*)s2;
	while (first[i] && second[i])
	{
		if (first[i] != second[i])
			return (0);
		i++;
	}
	if ((!first[i] && second[i]) || (first[i] && !second[i]))
		return (0);
	return (1);
}
