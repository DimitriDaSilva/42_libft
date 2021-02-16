/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 16:12:01 by dda-silv          #+#    #+#             */
/*   Updated: 2021/02/16 10:07:00 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_power(int nb, int power)
{
	int result;

	if (power == 0)
		return (1);
	else if (power <= 0)
		return (0);
	result = 1;
	while (power--)
		result *= nb;
	return (result);
}
