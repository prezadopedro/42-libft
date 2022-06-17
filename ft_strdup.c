/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: progerio <progerio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 00:02:09 by progerio          #+#    #+#             */
/*   Updated: 2022/06/13 15:49:42 by progerio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*s1;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	s1 = (char *)malloc((len + 1) * sizeof(char));
	ft_memcpy(s1, s, len + 1);
	return (s1);
}
