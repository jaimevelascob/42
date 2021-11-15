/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvelasco <jvelasco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 13:27:13 by jvelasco          #+#    #+#             */
/*   Updated: 2021/11/15 13:34:26 by jvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{	
		if (lst->next == '\0')
			return (lst);
		lst = lst->next;
	}
	return (lst);
}
