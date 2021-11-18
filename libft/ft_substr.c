/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvelasco <jvelasco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:39:25 by jvelasco          #+#    #+#             */
/*   Updated: 2021/11/18 18:40:15 by jvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*news;
	int		i;

	if (!s)
		return (0);
	i = 0;
	if (start >= (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	news = malloc(len + 1);
	if (!news)
		return (NULL);
	while (s[i] && i < (int)len)
		news[i++] = s[start++];
	news[i] = 0;
	return (news);
}
