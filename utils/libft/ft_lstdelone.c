/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 20:06:10 by afakili           #+#    #+#             */
/*   Updated: 2022/02/13 20:06:10 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
	else
		return ;
}

// void del(void *arg)
// {
// 	free(arg);
// }

// int main()
// {
// 	t_list *list;
// 	t_list *next;
// 	list = ft_lstnew("Ahmet");
// 	ft_lstadd_back(&list, ft_lstnew("Can"));
// 	next = list->next;
// 	ft_lstdelone(list, del);
// 	printf("%d", list->content);
// }