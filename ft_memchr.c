/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeuriot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 09:37:50 by dmeuriot          #+#    #+#             */
/*   Updated: 2015/11/30 09:37:51 by dmeuriot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				a;
	unsigned char	*b;

	a = 0;
	b = (unsigned char*)s;
	while (n--)
		if (b[a++] == (unsigned char)c)
			return ((void*)b + --a);
	return (NULL);
}
