/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 12:31:59 by dda-silv          #+#    #+#             */
/*   Updated: 2021/02/16 10:34:09 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_size_nbr(int n)
{
	if (0 <= n && n < 10)
		return (1);
	else if (-10 < n && n < 0)
		return (2);
	return (1 + get_size_nbr(n / 10));
}

static int		ft_abs2(int n)
{
	return (n < 0 ? -n : n);
}

char			*ft_itoa(int n)
{
	char	*str;
	size_t	size_nbr;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	size_nbr = get_size_nbr(n);
	if (!(str = malloc((size_nbr + 1) * sizeof(char))))
		return (0);
	str += size_nbr;
	*str-- = '\0';
	while (size_nbr--)
	{
		*str-- = ft_abs2(n) % 10 + ASCII_OFFSET_NUM;
		if (-10 < n && n < 0)
		{
			*str-- = '-';
			break ;
		}
		n /= 10;
	}
	return (++str);
}
