/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilbur <mwilbur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 15:41:27 by mwilbur           #+#    #+#             */
/*   Updated: 2019/09/08 15:50:40 by mwilbur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isupper(int c)
{
	return (c >= 65 && c <= 90);
}

static int	ft_islower(int c)
{
	return (c >= 97 && c <= 122);
}

int			ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}
