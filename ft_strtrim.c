/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmichel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:54:33 by lmichel           #+#    #+#             */
/*   Updated: 2021/10/07 18:56:24 by lmichel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	k;
	size_t	i;
	char	*ret;

	if (!s1)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr(set, (int)s1[i]))
		i++;
	k = ft_strlen(s1);
	while ((k - i) && ft_strchr(set, (int)s1[k]))
		k--;
	ret = ft_substr(s1, i, k - i + 1);
	return (ret);
}
