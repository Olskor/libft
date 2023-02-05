/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <jauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 12:15:40 by jauffret          #+#    #+#             */
/*   Updated: 2023/02/04 17:59:35 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, int n)
{
	char	*dst;
	char	*str;

	str = (char *)src;
	dst = (char *)dest;
	if (src > dest)
	{
		while (n > 0)
		{
			*dst = *str;
			n--;
			dst++;
			str++;
		}
	}
	else
	{
		while (n > 0)
		{
			n--;
			*(dst + n) = *(str + n);
		}
	}
	return (dest);
}
