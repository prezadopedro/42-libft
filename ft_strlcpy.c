/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: progerio <progerio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 17:08:18 by progerio          #+#    #+#             */
/*   Updated: 2022/06/13 15:50:56 by progerio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, int size)
{
	size_t	i;
	size_t	len;

	if (!dst || !src)
		return (0);
	i = 0;
	len = ft_strlen(src);
	if (size != 0)
	{
		while (src[i] && --size)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}
