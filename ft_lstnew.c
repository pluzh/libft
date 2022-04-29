/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmichel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 19:04:11 by lmichel           #+#    #+#             */
/*   Updated: 2021/10/07 19:04:13 by lmichel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*begin;

	begin = malloc(sizeof(t_list));
	if (begin == NULL)
		return ((void *)0);
	begin->content = content;
	begin->next = NULL;
	return (begin);
}
