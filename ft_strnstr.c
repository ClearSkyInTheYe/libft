/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chfederi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:29:38 by chfederi          #+#    #+#             */
/*   Updated: 2021/10/11 19:47:57 by chfederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *hay, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;
	size_t	buf;

	i = 0;
	if (!*needle)
		return ((char *) hay);
	while (hay[i] != '\0' && len > i)
	{
		n = 0;
		if (hay[i] == needle[n])
		{
			buf = i;
			while (hay[buf] == needle[n] && len > buf++)
			{
				n++;
				if (needle[n] == '\0')
					return ((char *) &hay[i]);
			}
		}
		i++;
	}
	return (0);
}
