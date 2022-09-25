/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chfederi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 22:47:18 by chfederi          #+#    #+#             */
/*   Updated: 2021/10/07 23:24:04 by chfederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*sd;
	int		i;

	i = 0;
	while (s1[i])
		i++;
	sd = malloc(sizeof(char) * i + 1);
	if (sd == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		sd[i] = s1[i];
		i++;
	}
	sd[i] = '\0';
	return (sd);
}
