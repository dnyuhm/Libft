/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeuriot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 13:02:00 by dmeuriot          #+#    #+#             */
/*   Updated: 2015/11/30 13:02:03 by dmeuriot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int	len;

	len = ft_strlen(dest);
	ft_memcpy(&dest[len], src, n);
	dest[n + len] = '\0';
	return (dest);
}
