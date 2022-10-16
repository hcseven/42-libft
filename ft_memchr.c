/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseven <hseven@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 11:25:56 by hseven            #+#    #+#             */
/*   Updated: 2022/07/03 11:25:56 by hseven           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	a;

	a = 0;
	while (n > a)
	{
		if (*(unsigned char *)(s + a) == (unsigned char)c)
		{
			return ((void *)(s + a));
		}
		a++;
	}
	return (NULL);
}
