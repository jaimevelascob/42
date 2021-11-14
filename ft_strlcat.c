/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvelasco <jvelasco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 21:23:01 by jvelasco          #+#    #+#             */
/*   Updated: 2021/11/07 12:12:22 by jvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	x;
	unsigned int	y;

	i = 0;
	x = ft_strlen(dest);
	y = ft_strlen(src);
	j = x;
	if (size < x)
		return (y + size);
	else
	{
		while (src[i] && (j + 1 < size))
		{
			dest[j] = src[i];
			j++;
			i++;
		}
		dest[j] = '\0';
		return (x + y);
	}
}
