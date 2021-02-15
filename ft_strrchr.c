/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dds <dda-silv@student.42lisboa.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 18:44:09 by dda-silv          #+#    #+#             */
/*   Updated: 2021/02/15 14:28:06 by dds              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		s_len;
	char	*end_s;

	s_len = ft_strlen(s);
	end_s = (char *)s + s_len;
	if ((unsigned char)c == 0)
		return (end_s);
	while (*s != *end_s--)
	{
		if (*end_s == (unsigned char)c)
			return (end_s);
	}
	return (0);
}
