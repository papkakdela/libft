/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wendell <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 15:04:36 by wendell           #+#    #+#             */
/*   Updated: 2019/09/08 15:04:49 by wendell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	void *fresh_mem;

	if (size == ((size_t)-1))
		return (NULL);
	if (!(fresh_mem = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_memset(fresh_mem, '\0', size + 1);
	return (fresh_mem);
}
