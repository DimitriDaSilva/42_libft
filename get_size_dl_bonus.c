/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_size_dl_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 13:24:13 by dda-silv          #+#    #+#             */
/*   Updated: 2021/02/16 10:35:03 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_size_dl(double nb)
{
	if (-10 < nb && 1 / nb < 0)
		return (2);
	else if (0 <= nb && nb < 10)
		return (1);
	return (1 + get_size_dl(nb / 10));
}
