/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chfederi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:46:40 by chfederi          #+#    #+#             */
/*   Updated: 2021/10/11 17:46:43 by chfederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	i = i + 1;
	while (i--)
	{
		if (str[i] == (char) c)
			return ((char *) &str[i]);
	}
	return (0);
}
