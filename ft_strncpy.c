/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 07:05:35 by dda-silv          #+#    #+#             */
/*   Updated: 2020/11/12 18:51:15 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char *sav_dest;
	char *sav_src;

	sav_dest = dest;
	sav_src = src;
	if (n != 0)
	{
		while (1)
		{
			if ((*sav_dest++ = *sav_src++) == 0)
			{
				while (--n != 0)
					*sav_dest++ = 0;
				break ;
			}
			if (--n == 0)
				break ;
		}
	}
	return (dest);
}
