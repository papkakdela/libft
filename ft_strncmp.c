/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wendell <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 18:52:45 by wendell           #+#    #+#             */
/*   Updated: 2019/09/07 18:52:47 by wendell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*cs1;
	unsigned char	*cs2;

	i = 0;
	cs1 = (unsigned char *)s1;
	cs2 = (unsigned char *)s2;
	if (n > 0)
	{
		while (n-- && (cs1[i] == cs2[i]) && cs1[i])
			i++;
		if (n == (size_t)-1)
			return (0);
		return (cs1[i] - cs2[i]);
	}
	return (0);
}
