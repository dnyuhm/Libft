/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeuriot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 08:59:09 by dmeuriot          #+#    #+#             */
/*   Updated: 2015/12/03 08:59:10 by dmeuriot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_int_len(int n)
{
	int		len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len++;
		n = n * -1;
	}
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	int		len;
	char	*s;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_int_len(n);
	s = ft_strnew(len);
	if (s == NULL)
		return (NULL);
	if (n == 0)
	{
		s[0] = '0';
	}
	if (n < 0)
	{
		n *= -1;
		s[0] = '-';
	}
	while (n)
	{
		len--;
		s[len] = '0' + n % 10;
		n /= 10;
	}
	return (s);
}
