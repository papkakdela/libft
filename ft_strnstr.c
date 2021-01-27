/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wendell <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 18:32:55 by wendell           #+#    #+#             */
/*   Updated: 2019/09/07 18:32:56 by wendell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t nlen;

	i = 0;
	nlen = ft_strlen(needle);
	if (!*needle)
		return ((char *)haystack);
	if (needle == haystack)
		return ((char *)haystack);
	while (*haystack && len-- >= nlen)
	{
		while (haystack[i] == needle[i] && needle[i])
			i++;
		if (needle[i] == '\0')
			return ((char *)haystack);
		i = 0;
		haystack++;
	}
	return (NULL);
}
