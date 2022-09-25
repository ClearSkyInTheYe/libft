/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chfederi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:03:23 by chfederi          #+#    #+#             */
/*   Updated: 2021/10/07 18:03:27 by chfederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t n, size_t size )
{
	void	*s;

	if (size && SIZE_MAX / size < n)
		return (NULL);
	s = malloc(size * n);
	if (s == NULL)
		return (NULL);
	s = ft_memset(s, 0, n * size);
	return (s);
}
