/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <jauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:25:06 by jauffret          #+#    #+#             */
/*   Updated: 2023/02/04 18:33:53 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	char	*tab;

	if (nmemb > sizeof(long long))
		return (NULL);
	tab = malloc(size * nmemb);
	i = 0;
	if (!tab)
		return (NULL);
	while (i < size * nmemb)
	{
		tab[i] = 0;
		i++;
	}
	return (tab);
}
