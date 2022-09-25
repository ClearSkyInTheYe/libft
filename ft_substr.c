/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chfederi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 22:09:04 by chfederi          #+#    #+#             */
/*   Updated: 2021/10/11 22:09:09 by chfederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*ft_strndup(const char *s1, size_t len)
{
	char	*sd;
	size_t	i;

	i = 0;
	while (s1[i] && i < len)
		i++;
	sd = malloc(sizeof(char) * i + 1);
	if (sd == NULL)
		return (NULL);
	i = 0;
	while (s1[i] && i < len)
	{
		sd[i] = s1[i];
		i++;
	}
	sd[i] = '\0';
	return (sd);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sb;
	size_t	n;

	n = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		sb = malloc(sizeof (char));
		if (sb == NULL)
			return (NULL);
		*sb = '\0';
		return (sb);
	}
	sb = ft_strndup(&s[start], len);
	if (sb == NULL)
		return (NULL);
	return (sb);
}
