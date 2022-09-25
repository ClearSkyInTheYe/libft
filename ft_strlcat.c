/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chfederi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 21:45:02 by chfederi          #+#    #+#             */
/*   Updated: 2021/10/08 21:45:06 by chfederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsz)
{
	size_t	dl;
	size_t	sl;

	sl = ft_strlen(src);
	dl = ft_strlen(dst);
	if (!dsz || (dsz < dl))
		return (dsz + sl);
	else
		ft_strlcpy(dst + dl, src, dsz - dl);
	return (dl + sl);
}
