/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wendell <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 15:46:14 by wendell           #+#    #+#             */
/*   Updated: 2019/09/08 15:46:16 by wendell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	res(char c)
{
	return (c == ' ' || c == ',' || c == '\t' || c == '\n');
}

char		*ft_strtrim(char const *s)
{
	int slen;
	int i;

	if (!s)
		return (NULL);
	i = 0;
	slen = ft_strlen(s) - 1;
	while (res((char)s[i]))
		i++;
	while (res((char)s[slen]) && slen > i)
		slen--;
	if (slen < i)
		return (ft_strdup(""));
	return (ft_strsub(s, i, slen - i + 1));
}
