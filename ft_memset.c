/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chfederi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 20:26:51 by chfederi          #+#    #+#             */
/*   Updated: 2021/10/07 20:26:55 by chfederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *m, int v, size_t l)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = (unsigned char *)m;
	while (l > 0)
	{
		p[i] = (unsigned char)v;
		i++;
		l--;
	}
	return (m);
}
