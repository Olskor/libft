/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <jauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:00:39 by jauffret          #+#    #+#             */
/*   Updated: 2023/02/04 18:13:15 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	last;

	i = 0;
	last = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			last = i;
		i++;
	}
	if (s[last] == (unsigned char)c)
		return ((char *) s + last);
	if (c == '\0')
		return ((char *) s + i);
	return (0);
}
