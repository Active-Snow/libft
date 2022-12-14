/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btinturi <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:35:49 by btinturi          #+#    #+#             */
/*   Updated: 2022/10/17 13:53:47 by btinturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cpys;

	cpys = (unsigned char *)s;
	while (n--)
	{
		if (*cpys == (unsigned char)c)
			return (cpys);
		cpys++;
	}
	return (NULL);
}
