/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvelasco <jvelasco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:37:12 by jvelasco          #+#    #+#             */
/*   Updated: 2021/11/14 17:02:31 by jvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{	
		i++;
		lst = lst->next;
	}
	return (i);
}

int	main(void)
{
	t_list *lst;
	t_list *new;


	lst = malloc(sizeof(t_list));
	lst = ft_lstnew("lst");
	new = ft_lstnew("hello");
	ft_lstadd_front(&lst, new);
	printf("%s\n",lst->content);
	ft_lstsize(lst);
	printf("%s\n",lst->content);
}