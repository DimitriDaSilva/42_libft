/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remainder_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 07:41:06 by dda-silv          #+#    #+#             */
/*   Updated: 2021/02/16 10:07:21 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double	ft_remainder(double numer, double denom)
{
	if (numer < 0)
		numer *= -1;
	return (numer - (denom * (long long)(numer / denom)));
}
