/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 08:25:49 by dda-silv          #+#    #+#             */
/*   Updated: 2021/02/16 10:04:36 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	if (str == 0)
		return (1);
	while (*str)
	{
		if (!('A' <= *str && *str <= 'Z'))
			return (0);
		str++;
	}
	return (1);
}
