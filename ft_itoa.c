/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 12:31:59 by dda-silv          #+#    #+#             */
/*   Updated: 2021/01/14 13:09:41 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define ASCII_OFFSET 48

size_t	get_size_nbr(int n);

char	*ft_itoa(int n)
{
	char	*str;
	size_t	size_nbr;

	size_nbr = get_size_nbr(n);
	if (!(str = malloc((size_nbr + 1) * sizeof(char))))
		return (0);
	str += size_nbr + 1;
	*str-- = '\0';
	while (--size_nbr)
	{
		printf("size_nbr: ")
		*str-- = n % 10 + ASCII_OFFSET;
		n /= 10;
	}
	return (str);
}

size_t	get_size_nbr(int n)
{
	if (0 <= n && n < 10)
		return (1);
	else if (-10 < n && n < 0)
		return (2);
	return (1 + get_size_nbr(n / 10));	
}

int	main(int argc, char *argv[])
{
	printf("ft_itoa(%d) = \"%s\"\n", ft_atoi(argv[1]), ft_itoa(ft_atoi(argv[1])));
	return (0);
}