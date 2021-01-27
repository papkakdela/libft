/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wendell <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 16:45:59 by wendell           #+#    #+#             */
/*   Updated: 2019/09/08 16:46:00 by wendell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	f_term(int *n, int *f)
{
	if (*n < 0)
	{
		*n *= -1;
		*f = 1;
	}
}

char		*ft_itoa(int n)
{
	int		cn;
	int		len;
	int		f;
	char	*res;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	cn = n;
	len = 2;
	f = 0;
	f_term(&n, &f);
	while (cn /= 10)
		len++;
	len += f;
	if (!(res = ft_strnew(len - 1)))
		return (NULL);
	res[len--] = '\0';
	while (len--)
	{
		res[len] = n % 10 + '0';
		n = n / 10;
	}
	if (f)
		res[0] = '-';
	return (res);
}
