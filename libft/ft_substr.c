/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvelasco <jvelasco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:39:25 by jvelasco          #+#    #+#             */
/*   Updated: 2021/11/18 10:05:33 by jvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*news;
	int		i;
	int		lens;

	if (!s)
		return (0);
	i = 0;
	lens = ft_strlen(s);
	news = malloc(len + 1);
	if (!news)
		return (NULL);
	while (i < (int)len && start < (unsigned int)lens)
		news[i++] = s[start++];
	news[i] = 0;
	return (news);
}
