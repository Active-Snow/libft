/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btinturi <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:25:44 by btinturi          #+#    #+#             */
/*   Updated: 2022/10/11 16:06:42 by btinturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t i)
{
	size_t	len;
	char	*csrc;
	char	*cdest;

	csrc = (char *)src;
	cdest = (char *)dest;
	len = 0;
	if (cdest > cssrc)
		while (i-- > 0)
			cdest[i] = csrc[i];
	else
	{
		while (len < i)
		{
			cdest[len] = csrc[len];
			len++;
		}
	}
	return (dest);
}
