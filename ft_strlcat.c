/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmichel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:51:36 by lmichel           #+#    #+#             */
/*   Updated: 2021/10/07 18:51:38 by lmichel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	const char	*s1;
	char		*s2;
	size_t		i;
	size_t		j;

	s1 = (const char *) src;
	s2 = (char *) dst;
	i = 0;
	j = 0;
	if (dstsize == 0)
		return (ft_strlen(s1));
	while (s2[i] && i < dstsize)
		i++;
	while (i + j < dstsize - 1 && s1[j])
	{
		s2[i + j] = s1[j];
		j++;
	}
	if (i < dstsize)
	{
		s2[i + j] = '\0';
	}
	return (i + ft_strlen(s1));
}
