/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dds <dda-silv@student.42lisboa.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 18:46:57 by dda-silv          #+#    #+#             */
/*   Updated: 2021/02/16 00:05:16 by dds              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy2(char *dest, const char *src)
{
	char *saved;

	saved = dest;
	while ((*dest++ = *src++) != '\0')
		;
	return (saved);
}

char		*ft_strdup(const char *s)
{
	int		s_len;
	char	*cpy;

	s_len = ft_strlen(s) + 1;
	cpy = malloc(s_len * sizeof(char));
	if (cpy == 0)
		return (0);
	ft_strcpy2(cpy, s);
	return (cpy);
}
