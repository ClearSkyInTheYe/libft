/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chfederi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 22:11:15 by chfederi          #+#    #+#             */
/*   Updated: 2021/10/08 17:43:00 by chfederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*x;
	unsigned char		*p;
	size_t				i;

	i = 0;
	p = (unsigned char *)dest;
	x = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		p[i] = x[i];
		i++;
	}
	return (dest);
}
