/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chfederi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 17:59:48 by chfederi          #+#    #+#             */
/*   Updated: 2021/10/08 17:59:52 by chfederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *memp, int c, size_t n)
{
	unsigned char	*p1;

	p1 = (unsigned char *)memp;
	while (n--)
	{
		if (*p1 == (unsigned char)c)
			return ((unsigned char *)p1);
		p1++;
	}
	return (0);
}
