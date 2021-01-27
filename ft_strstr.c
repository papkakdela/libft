/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wendell <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 18:26:07 by wendell           #+#    #+#             */
/*   Updated: 2019/09/07 18:26:08 by wendell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t i;

	i = 0;
	if (!*needle)
		return ((char *)(haystack));
	if (needle == haystack)
		return ((char *)(haystack));
	while (*haystack)
	{
		while (haystack[i] == needle[i] && needle[i])
			i++;
		if (!needle[i])
			return ((char *)haystack);
		haystack++;
		i = 0;
	}
	return (NULL);
}
