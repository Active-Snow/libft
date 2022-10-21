/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btinturi <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:25:17 by btinturi          #+#    #+#             */
/*   Updated: 2022/10/19 10:53:26 by btinturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ret;
	size_t	siz;

	if (!s)
		return (NULL);
	siz = ft_strlen(s);
	if (start > siz)
	{
		start = siz;
		len = 0;
	}
	else if (siz < start + len)
		len = siz - start;
	ret = ft_calloc(len + 1, sizeof(char));
	if (!ret)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		ret[i] = s[start + i];
		i++;
	}
	ret[i] = 0;
	return (ret);
}
