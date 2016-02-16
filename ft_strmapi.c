/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeuriot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 11:22:55 by dmeuriot          #+#    #+#             */
/*   Updated: 2015/12/04 11:22:56 by dmeuriot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	if (!s || !f)
		return (NULL);
	str = ft_strdup((const char *)s);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != 0)
	{
		str[i] = f((unsigned int)i, str[i]);
		i++;
	}
	return (str);
}
