/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <jauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 11:55:56 by jauffret          #+#    #+#             */
/*   Updated: 2023/02/03 12:00:29 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, int n)
{
	char	*str;
	char	*dst;

	str = (char *)src;
	dst = (char *)dest;
	while (n > 0)
	{
		*dst = *str;
		dst++;
		str++;
		n--;
	}
	return (dest);
}
