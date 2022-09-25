/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chfederi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 19:12:03 by chfederi          #+#    #+#             */
/*   Updated: 2021/10/12 21:20:56 by chfederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_strtrip1(char a, char const *set)
{
	int	i;
	int	g;

	i = 0;
	g = 0;
	while (set[g])
	{
		if (set[g] == a)
		{
			i = 1;
		}
		g++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		b;
	char	*s2;

	if (!s1)
		return (NULL);
	i = 0;
	b = ft_strlen(s1);
	while (s1[i] && ft_strtrip1(s1[i], set) == 1)
		i++;
	while (i < b && s1[b - 1] && ft_strtrip1(s1[b - 1], set) == 1)
		b--;
	s2 = ft_substr(s1, i, b - i);
	return (s2);
}
