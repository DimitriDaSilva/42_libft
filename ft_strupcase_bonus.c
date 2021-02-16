/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 09:03:10 by dda-silv          #+#    #+#             */
/*   Updated: 2021/02/16 10:05:00 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char *saved;

	saved = str;
	while (*str)
	{
		if ('a' <= *str && *str <= 'z')
			*str -= 32;
		str++;
	}
	return (saved);
}
