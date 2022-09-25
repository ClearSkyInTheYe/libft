/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chfederi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 21:31:32 by chfederi          #+#    #+#             */
/*   Updated: 2021/10/04 21:35:50 by chfederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
char	*ft_strchr(const char	*str, int c)
{
	while (*str)
	{
		if (*str == (char) c)
			return ((char *) str);
		str++;
	}
	if (*str == (char) c)
		return ((char *) str);
	return (0);
}
