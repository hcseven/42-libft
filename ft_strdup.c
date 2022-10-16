/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseven <hseven@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 10:27:03 by hseven            #+#    #+#             */
/*   Updated: 2022/07/03 10:27:03 by hseven           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*s;
	int		a;
	size_t	b;

	a = 0;
	b = ft_strlen(str);
	s = malloc(sizeof(char) * b + 1);
	if (!s)
		return (0);
	while (str[a] != '\0')
	{
		s[a] = str[a];
		a++;
	}
	s[a] = '\0';
	return (s);
}
