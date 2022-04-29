/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmichel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:54:33 by lmichel           #+#    #+#             */
/*   Updated: 2021/10/07 18:56:24 by lmichel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	if (s[i] == (char)c)
	{
		j = i;
		k++;
	}
	while (s[i++])
	{
		if (s[i] == (char)c)
		{
			j = i;
			k++;
		}
	}
	if (k != 0)
		return ((char *)&s[j]);
	return (NULL);
}
