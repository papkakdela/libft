/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wendell <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 17:38:35 by wendell           #+#    #+#             */
/*   Updated: 2019/09/07 17:38:36 by wendell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*cs1;
	const unsigned char	*cs2;

	i = 0;
	cs1 = (const unsigned char*)s1;
	cs2 = (const unsigned char*)s2;
	if (n > 0)
	{
		while (i < n)
		{
			if (cs1[i] != cs2[i])
				return ((int)(cs1[i] - cs2[i]));
			i++;
		}
	}
	return (0);
}
