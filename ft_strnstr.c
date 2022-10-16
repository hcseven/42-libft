/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseven <hseven@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 10:20:42 by hseven            #+#    #+#             */
/*   Updated: 2022/07/03 10:20:42 by hseven           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *dst, const char *src, size_t len)
{
	size_t	h;
	size_t	n;

	h = 0;
	if (src[0] == '\0')
		return ((char *)dst);
	while (dst[h] != '\0')
	{
		n = 0;
		while (dst[h + n] == src[n] && (h + n) < len)
		{
			if (dst[h + n] == '\0' && src[n] == '\0')
				return ((char *)&dst[h]);
			n++;
		}
		if (src[n] == '\0')
			return ((char *)dst + h);
		h++;
	}
	return (0);
}
