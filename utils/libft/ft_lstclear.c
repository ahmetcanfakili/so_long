/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 16:45:09 by afakili           #+#    #+#             */
/*   Updated: 2022/02/13 16:45:09 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst && !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = tmp;
	}
	*lst = NULL;
}

// void del(void *arg)
// {
// 	free(arg);
// }

// int main()
// {
// 	t_list *list;
// 	list = ft_lstnew("Ahmet");
// 	ft_lstadd_back(&list, ft_lstnew("Can"));
// 	ft_lstclear(&list, del);
// }