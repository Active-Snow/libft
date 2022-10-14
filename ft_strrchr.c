/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btinturi <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:11:20 by btinturi          #+#    #+#             */
/*   Updated: 2022/10/14 14:36:24 by btinturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*lf;
	int		i;

	lf = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			lf = (char *)&str[i];
		i++;
	}
	if ((char)c == str[i])
		return ((char *)&str[i]);
	return (lf);
}
