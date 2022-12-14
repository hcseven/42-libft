/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseven <hseven@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 10:35:09 by hseven            #+#    #+#             */
/*   Updated: 2022/07/03 10:35:09 by hseven           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	array(char const*s, char c)
{
	size_t	a;
	size_t	b;

	if (c == '\0')
		return (1);
	a = 0;
	b = 0;
	while (s[a] == c)
		a++;
	while (s[a + 1] != '\0')
	{
		if (s[a] == c && s[a + 1] != c)
			b++;
		a++;
	}
	return (b + 1);
}

char	**ft_split(char const *s, char c)
{
	size_t	a;
	size_t	b;
	char	**str;

	if (!s)
		return (NULL);
	str = (char **)ft_calloc(array(s, c) + 1, sizeof(char *));
	if (!str)
		return (0);
	a = 0;
	while (*s != '\0')
	{
		if (*s == c)
			s++;
		else
		{
		b = 0;
			while (*s != c && *s && ++b)
				s++;
			str[++a - 1] = (char *)ft_calloc(b + 1, sizeof(char));
			ft_strlcpy(str[a - 1], s - b, b + 1);
		}
	}
	return (str);
}

//int main()
//{
//	char *s = "aasd, asdhsa, ,,,asdhvksa,,,";
//	char **str = ft_split(s, ',');
//	int a = 0;
//	while (s[a])
//	{
//		printf( "%s", str[a]);
//		a++;
//	}
//}