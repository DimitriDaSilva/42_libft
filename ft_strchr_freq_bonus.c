/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_freq_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 18:44:09 by dda-silv          #+#    #+#             */
/*   Updated: 2021/02/16 10:07:37 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strchr_freq(const char *s, int c)
{
	int	count;

	count = 0;
	if (s == 0)
		return (0);
	while (*s)
	{
		if (*s == c)
			count++;
		s++;
	}
	return (count);
}
