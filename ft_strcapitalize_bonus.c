/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 11:52:30 by gamartin          #+#    #+#             */
/*   Updated: 2021/02/16 10:34:29 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_test(char s)
{
	if ((s >= 65 && s <= 90) || (s >= 97 && s <= 122) || (s >= 48 && s <= 57))
		return (0);
	else
		return (1);
}

char		*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (ft_test(str[i - 1]) != 0 || str[i] == str[0])
				str[i] = str[i] - 32;
		}
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
			if (ft_test(str[i - 1]) != 0 || str[i] == str[0])
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
