/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wendell <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 17:31:02 by wendell           #+#    #+#             */
/*   Updated: 2019/09/07 17:31:04 by wendell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *cs;

	if (n || s)
	{
		cs = (unsigned char *)s;
		while (n--)
		{
			if (*cs++ == (unsigned char)c)
				return (cs - 1);
		}
	}
	return (NULL);
}
