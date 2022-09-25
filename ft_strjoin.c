/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chfederi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 22:38:46 by chfederi          #+#    #+#             */
/*   Updated: 2021/10/11 22:38:50 by chfederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	l3;
	size_t	l1;
	size_t	l2;

	if (!s1 || !s2)
		return (NULL);
	l1 = 0;
	l2 = 0;
	s3 = malloc(sizeof (char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (s3 == NULL)
		return (NULL);
	l3 = 0;
	while (s1[l1])
	{
		s3[l3] = s1[l1];
		l1++;
		l3++;
	}
	while (s2[l2])
		s3[l3++] = s2[l2++];
	s3[l3] = '\0';
	return (s3);
}
