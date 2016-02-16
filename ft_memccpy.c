/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeuriot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 12:52:31 by dmeuriot          #+#    #+#             */
/*   Updated: 2015/11/28 12:52:33 by dmeuriot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*s1;
	unsigned const char	*s2;
	int					i;

	s1 = (unsigned char*)dst;
	s2 = (unsigned const char*)src;
	i = 0;
	while (n--)
	{
		s1[i] = s2[i];
		if (s2[i++] == (unsigned char)c)
			return (dst + i);
	}
	return (NULL);
}
