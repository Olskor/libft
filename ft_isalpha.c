/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <jauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:52:50 by jauffret          #+#    #+#             */
/*   Updated: 2023/02/03 14:44:04 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	unsigned char	cchar;

	cchar = (unsigned char) c;
	if ((cchar >= 'a' && cchar <= 'z') || (cchar >= 'A' && cchar <= 'Z'))
		return (1024);
	return (0);
}
