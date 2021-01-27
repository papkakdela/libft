/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wendell <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 16:56:30 by wendell           #+#    #+#             */
/*   Updated: 2019/09/07 16:56:32 by wendell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t slen;

	slen = ft_strlen(src);
	if (slen < len)
	{
		ft_memset(dst + slen, '\0', len - slen);
		return (ft_memcpy(dst, src, slen));
	}
	else
		return (ft_memcpy(dst, src, len));
}
