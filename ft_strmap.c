/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wendell <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 15:20:29 by wendell           #+#    #+#             */
/*   Updated: 2019/09/08 15:20:31 by wendell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*fresh_str;

	i = 0;
	if (!s || !f)
		return (NULL);
	if (!(fresh_str = ft_strnew((size_t)ft_strlen(s))))
		return (NULL);
	while (s[i])
	{
		fresh_str[i] = f((char)s[i]);
		i++;
	}
	return (fresh_str);
}
