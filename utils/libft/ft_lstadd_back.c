/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:28:25 by afakili           #+#    #+#             */
/*   Updated: 2022/02/12 14:28:25 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst)
	{
		ft_lstlast(*lst)->next = new;
	}
	else
		*lst = new;
	return ;
}

// int main()
// {
// 	t_list *list;
// 	list = ft_lstnew("ahmet");
// 	ft_lstadd_back(&list, ft_lstnew("Can"));
// 	ft_lstadd_back(&list, ft_lstnew("Fakılı"));
// }