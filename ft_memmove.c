/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wendell <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 17:25:11 by wendell           #+#    #+#             */
/*   Updated: 2019/09/07 17:25:14 by wendell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char	*csrc;
	unsigned char		*cdst;

	csrc = (unsigned char *)src;
	cdst = (unsigned char *)dst;
	if (csrc < cdst)
		while (len--)
			*(cdst + len) = *(csrc + len);
	else if (csrc > cdst)
		ft_memcpy(dst, src, len);
	return (dst);
}
