/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wendell <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 15:11:36 by wendell           #+#    #+#             */
/*   Updated: 2019/09/07 15:11:38 by wendell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s;
	int		i;

	i = 0;
	if (!(s = (char*)malloc(sizeof(char*) * ft_strlen(s1) + 1)))
		return (NULL);
	s = ft_strcpy(s, s1);
	return (s);
}
