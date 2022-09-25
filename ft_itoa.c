/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chfederi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 17:30:35 by chfederi          #+#    #+#             */
/*   Updated: 2021/10/15 17:30:44 by chfederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_neglen(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
		return (11);
	if (n < 0 && n >= -9)
	{
		i = 2;
		return (i);
	}
	n = -n;
	while ((n / 10) > 9)
	{
		n = n / 10;
		i++;
	}
	i = i + 3;
	return (i);
}

static	int	ft_nlen(int n)
{
	int	i;

	i = 0;
	if (n == 0)
	{
		i = 1;
		return (i);
	}
	if (n > 0)
	{
		if (n <= 9 && n > 0)
		{
			i = 1;
			return (i);
		}
		while ((n / 10) > 9)
		{
			n = n / 10;
			i++;
		}
		i = i + 2;
	}
	else
		i = ft_neglen(n);
	return (i);
}

char	*ft_itoa(int n)
{
	unsigned int	c;
	char			*s;
	int				i;
	int				l;
	long			b;

	b = n;
	i = ft_nlen(n);
	l = ft_nlen(n) - 1;
	s = malloc(sizeof (char) * (i + 1));
	if (s == NULL)
		return (NULL);
	if (n < 0)
		n = -n;
	c = n;
	while (l >= 0)
	{
		s[l] = c % 10 + 48;
		c = c / 10;
		l--;
	}
	if (b < 0)
		s[l + 1] = '-';
	s[i] = '\0';
	return (s);
}
