/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeuriot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 13:33:23 by dmeuriot          #+#    #+#             */
/*   Updated: 2015/11/28 13:33:26 by dmeuriot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int				i;
	unsigned char	*s1;
	unsigned char	*s2;

	s2 = (unsigned char*)dst;
	s1 = (unsigned char*)src;
	if (s1 > s2)
	{
		i = 0;
		while (i <= (int)len - 1)
		{
			s2[i] = s1[i];
			++i;
		}
	}
	else if (s1 < s2)
	{
		i = len - 1;
		while (i >= 0)
		{
			s2[i] = s1[i];
			--i;
		}
	}
	return (dst);
}
