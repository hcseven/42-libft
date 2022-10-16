/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseven <hseven@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 10:58:26 by hseven            #+#    #+#             */
/*   Updated: 2022/07/03 10:58:26 by hseven           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	a;

	if (!dst && !src)
		return (0);
	a = 0;
	if ((size_t)dst - (size_t)src < len)
	{
		a = len - 1;
		while (a < len)
		{
			((unsigned char *)dst)[a] = ((unsigned char *)src)[a];
			a--;
		}
	}
	else
	{
		while (a < len)
		{
			((unsigned char *)dst)[a] = ((unsigned char *)src)[a];
			a++;
		}
	}
	return (dst);
}
