/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wendell <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 18:19:02 by wendell           #+#    #+#             */
/*   Updated: 2019/09/07 18:19:03 by wendell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*last;

	last = NULL;
	len = ft_strlen(s) + 1;
	while (len--)
	{
		if (*s++ == c)
			last = (char *)(s - 1);
	}
	return (last);
}
