/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseven <hseven@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 10:25:01 by hseven            #+#    #+#             */
/*   Updated: 2022/07/03 10:25:01 by hseven           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	a;

	a = 0;
	if (size > a)
	{
		while (src[a] != '\0' && (size - 1) > a)
		{
			dst[a] = src[a];
			a++;
		}
		dst[a] = '\0';
	}
	while (src[a] != '\0')
	{
		a++;
	}
	return (a);
}
