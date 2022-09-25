/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chfederi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 23:05:06 by chfederi          #+#    #+#             */
/*   Updated: 2021/10/07 23:05:09 by chfederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*ds;
	unsigned char	*sr;
	size_t			i;

	i = 0;
	ds = (unsigned char *)dest;
	sr = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		while (i++ < len)
			ds[len - i] = sr[len - i];
	}
	else
	{
		while (len--)
		{
			ds[i] = sr[i];
			i++;
		}
	}
	return (dest);
}
