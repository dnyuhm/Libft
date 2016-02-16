/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeuriot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 16:02:40 by dmeuriot          #+#    #+#             */
/*   Updated: 2015/12/08 14:15:12 by dmeuriot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*t1;
	char	*t2;
	char	*t3;
	size_t	len;

	t1 = (char*)s1;
	len = ft_strlen(s2);
	while (*t1 && n-- >= len)
	{
		t3 = t1;
		t2 = (char*)s2;
		while (*t2 && *t2 == *t3)
		{
			t2++;
			t3++;
		}
		if (*t2 == '\0')
			return (t1);
		t1++;
	}
	if (!*s1 && !*s2)
		return (t1);
	return (NULL);
}
