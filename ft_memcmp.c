/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseven <hseven@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 11:11:15 by hseven            #+#    #+#             */
/*   Updated: 2022/07/03 11:11:15 by hseven           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	a;

	a = 0;
	while (a < n)
	{
		if (*(unsigned char *)(s1 + a) != *(unsigned char *)(s2 + a))
		{
			return (*(unsigned char *)(s1 + a) - *(unsigned char *)(s2 + a));
		}
		a++;
	}
	return (0);
}
