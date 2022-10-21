/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btinturi <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:18:58 by btinturi          #+#    #+#             */
/*   Updated: 2022/10/17 15:44:44 by btinturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	c;

	if (*s2 == 0 || s2 == s1)
		return ((char *)s1);
	c = ft_strlen(s2);
	while (*s1 && c <= n--)
	{
		if (!ft_strncmp((char *)s1, (char *)s2, c))
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
