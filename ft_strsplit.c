/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wendell <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 16:24:09 by wendell           #+#    #+#             */
/*   Updated: 2019/09/08 16:24:11 by wendell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char *s, char c)
{
	int i;
	int f;
	int count;

	i = 0;
	count = 0;
	f = 0;
	while (s[i])
	{
		if (s[i] != c && f == 0)
		{
			f = 1;
			count++;
		}
		else if (s[i] == c && f == 1)
			f = 0;
		i++;
	}
	return (count);
}

static char	*wmalloc(char *s, char c)
{
	char	*s1;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	s1 = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (s[i] && s[i] != c)
	{
		s1[i] = s[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

static void	arr_free(char **arr, int i)
{
	while (--i)
		free(arr[i]);
	free(arr);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**arr;
	int		i;

	if (!s || !(arr = (char **)malloc(sizeof(char *) *
	(count_words((char*)s, c) + 1))))
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && (*s == c))
			s++;
		if (*s && *s != c)
		{
			if (!(arr[i] = wmalloc((char *)s, c)))
			{
				arr_free(arr, i);
				return (NULL);
			}
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	arr[i] = NULL;
	return (arr);
}
