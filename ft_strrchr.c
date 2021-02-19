/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 18:44:09 by dda-silv          #+#    #+#             */
/*   Updated: 2021/02/19 17:10:06 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*end_s;
	char	*last;

	last = 0;
	end_s = (char *)s + ft_strlen(s);
	if (c == 0)
		return (end_s);
	while (*s)
	{
		if (*s == c)
			last = (char *)s;
		s++;
	}
	return (last);
}
