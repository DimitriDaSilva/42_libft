/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 07:52:06 by dda-silv          #+#    #+#             */
/*   Updated: 2021/02/16 10:03:28 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int tmp;
	int i;

	tmp = nb;
	i = 1;
	while (tmp - i > 0)
	{
		tmp = (tmp + i) / 2;
		i = nb / tmp;
	}
	if (tmp * tmp == nb)
		return (tmp);
	else
		return (0);
}
