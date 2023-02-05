/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <jauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 14:13:56 by jauffret          #+#    #+#             */
/*   Updated: 2023/02/05 11:12:23 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_char(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static size_t	trimlen(char const *s1, char const *set)
{
	size_t		i;
	size_t		tot;

	i = 0;
	tot = 0;
	while (s1[i])
	{
		if (is_char(s1[i], set))
			tot++;
		i++;
	}
	return (i - tot);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		tot;
	char		*rst;

	rst = calloc(sizeof(char), trimlen(s1, set) + 1);
	if (!rst)
		return (NULL);
	i = 0;
	tot = 0;
	while (s1[i])
	{
		if (!is_char(s1[i], set))
		{
			rst[tot] = s1[i];
			tot++;
		}
		i++;
	}
	return (rst);
}
