/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chfederi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 17:20:32 by chfederi          #+#    #+#             */
/*   Updated: 2021/10/15 17:20:35 by chfederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*s1;
	unsigned int	x;

	if (!s || !f)
		return (NULL);
	s1 = malloc(sizeof (char) * (ft_strlen(s) + 1));
	if (s1 == NULL)
		return (NULL);
	x = 0;
	while (x < ft_strlen(s))
	{
		s1[x] = (*f)(x, s[x]);
		x++;
	}
	s1[x] = '\0';
	return (s1);
}
