/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wendell <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 15:11:28 by wendell           #+#    #+#             */
/*   Updated: 2019/09/08 15:11:30 by wendell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	int		i;
	char	*cs;

	i = 0;
	cs = s;
	if (!s)
		return ;
	while (*cs++)
		i++;
	ft_memset(s, '\0', i);
}
