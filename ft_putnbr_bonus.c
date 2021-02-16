/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 11:16:39 by dda-silv          #+#    #+#             */
/*   Updated: 2021/02/16 10:34:23 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	convert_to_char(int nb)
{
	if (nb < 0)
	{
		nb *= -1;
	}
	return (nb + ASCII_OFFSET_NUM);
}

void		ft_putnbr(int nb)
{
	char	nb_to_print;
	char	hyphen;
	int		remainder;

	if (0 <= nb && nb < 10)
	{
		nb_to_print = convert_to_char(nb);
		write(1, &nb_to_print, 1);
		return ;
	}
	else if (-10 < nb && nb < 0)
	{
		hyphen = '-';
		write(1, &hyphen, 1);
		nb_to_print = convert_to_char(nb);
		write(1, &nb_to_print, 1);
		return ;
	}
	remainder = nb % 10;
	ft_putnbr(nb / 10);
	nb_to_print = convert_to_char(remainder);
	write(1, &nb_to_print, 1);
	return ;
}
