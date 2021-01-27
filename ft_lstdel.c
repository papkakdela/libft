/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wendell <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 17:44:48 by wendell           #+#    #+#             */
/*   Updated: 2019/09/11 17:44:49 by wendell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *temp;

	if (!del || !alst)
		return ;
	while (*alst)
	{
		temp = (*alst)->next;
		del(((*alst)->content), (*alst)->content_size);
		free(*alst);
		*alst = temp;
	}
	*alst = NULL;
}
