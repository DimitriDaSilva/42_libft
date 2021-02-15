/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dds <dda-silv@student.42lisboa.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 09:33:52 by dda-silv          #+#    #+#             */
/*   Updated: 2021/02/15 18:45:23 by dds              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	size_t	little_len;

	little_len = ft_strlen(little);
	if (little_len == 0)
		return ((char *)big);
	if (len == 0)
		return (0);
	i = -1;
	while (*(char *)big && (int)(len - little_len) != -1)
	{
		if (!ft_strncmp((char *)big, (char *)little, little_len))
			return ((char *)big);
		len--;
		big++;
	}
	return (0);
}
