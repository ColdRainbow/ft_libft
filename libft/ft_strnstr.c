/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkate <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 19:03:53 by jkate             #+#    #+#             */
/*   Updated: 2020/11/01 00:15:09 by jkate            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *source, const char *find, size_t n)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	if (find[b] == '\0')
		return ((char *)source);
	while (source[a] != '\0' && a < n)
	{
		b = 0;
		while (find[b] != '\0' && (a + b < n))
		{
			if (source[a + b] != find[b])
				break ;
			b++;
		}
		if (find[b] == '\0')
			return ((char *)source + a);
		a++;
	}
	return (NULL);
}
