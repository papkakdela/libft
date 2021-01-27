/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wendell <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 14:53:01 by wendell           #+#    #+#             */
/*   Updated: 2019/09/08 14:53:04 by wendell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *fresh_mem;

	if (!(fresh_mem = (void *)malloc(sizeof(void) * size)))
		return (NULL);
	ft_bzero(fresh_mem, size);
	return (fresh_mem);
}
