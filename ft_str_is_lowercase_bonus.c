/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 08:06:14 by dda-silv          #+#    #+#             */
/*   Updated: 2021/02/16 10:04:14 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	if (str == 0)
		return (1);
	while (*str)
	{
		if (!('a' <= *str && *str <= 'z'))
			return (0);
		str++;
	}
	return (1);
}
