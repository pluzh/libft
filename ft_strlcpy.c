/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmichel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:51:36 by lmichel           #+#    #+#             */
/*   Updated: 2021/10/07 18:51:38 by lmichel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	const char	*s1;
	char		*s2;
	size_t		i;

	s1 = (const char *)src;
	s2 = (char *)dst;
	i = 0;
	if (dstsize == 0)
		return (ft_strlen(s1));
	while (i < dstsize - 1 && s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (ft_strlen(s1));
}
