/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chfederi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:34:13 by chfederi          #+#    #+#             */
/*   Updated: 2021/10/04 19:45:02 by chfederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long	i;
	int				z;
	unsigned long	n;

	n = 0;
	i = 0;
	z = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		   || str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			z = -z;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		n = n * 10 + str[i++] - 48;
	if (n >= 2147483649 && z == -1)
		return (0);
	else if (n >= 2147483648 && z == 1)
		return (-1);
	return (n * z);
}
