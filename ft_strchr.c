/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeuriot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 08:58:24 by dmeuriot          #+#    #+#             */
/*   Updated: 2015/12/01 08:58:28 by dmeuriot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*s1;

	s1 = (char*)s;
	while (*s1)
	{
		if ((*s1) == (char)c)
			return (s1);
		s1++;
	}
	if ((*s1) == (char)c)
		return (s1);
	return (NULL);
}
