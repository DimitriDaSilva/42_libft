/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 11:24:34 by dda-silv          #+#    #+#             */
/*   Updated: 2021/02/16 10:04:48 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char *saved;

	saved = str;
	while (*str)
	{
		if ('A' <= *str && *str <= 'Z')
			*str += 32;
		str++;
	}
	return (saved);
}
