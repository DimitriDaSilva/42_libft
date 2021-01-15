/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 19:31:13 by dda-silv          #+#    #+#             */
/*   Updated: 2021/01/15 10:08:23 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_length(char const *s1, char const *set);
void	trim(char *new_str,
			size_t size_new_str,
			char const *s1,
			char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	size_t	size_new_str;

	if (!s1)
		return (0);
	size_new_str = get_length(s1, set) + 1;
	if (size_new_str == 1)
		return (ft_strdup(""));
	if (!(new_str = malloc(size_new_str * sizeof(char))))
		return (0);
	trim(new_str, size_new_str, s1, set);
	return (new_str);
}

size_t	get_length(char const *s1, char const *set)
{
	size_t	size_s1;
	size_t	char_to_trim;
	char	*end_s1;

	if (!*s1)
		return (0);
	size_s1 = ft_strlen(s1) + 1;
	char_to_trim = 0;
	end_s1 = (char *)s1 + ft_strlen(s1);
	while (ft_strchr(set, *s1++))
	{
		char_to_trim++;
		if (!*s1)
			return (0);
	}
	while (ft_strchr(set, *end_s1--))
		char_to_trim++;
	return (size_s1 - char_to_trim);
}

void	trim(char *new_str,
			size_t size_new_str,
			char const *s1,
			char const *set)
{
	while (ft_strchr(set, *s1))
		s1++;
	while (--size_new_str)
		*new_str++ = *s1++;
	*new_str = '\0';
}