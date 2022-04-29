/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmichel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:38:28 by lmichel           #+#    #+#             */
/*   Updated: 2021/10/07 18:39:20 by lmichel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ret(int sign)
{
	if (sign == 1)
		return (-1);
	return (0);
}

int	ft_atoi(const char *str)
{
	size_t	i;
	int		sign;
	size_t	nbr;
	size_t	j;
	size_t	max;

	max = 2147483648;
	j = 0;
	i = 0;
	sign = 1;
	nbr = 0;
	while (str[i] == '\t' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\v' || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if ((j++ > 17) && ((str[i] - '0' > 7 && nbr == max) || nbr > max))
			return (ft_ret(sign));
		nbr = nbr * 10 + (str[i++] - '0');
	}
	return ((nbr * sign));
}
