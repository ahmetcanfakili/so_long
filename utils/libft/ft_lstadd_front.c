/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:27:41 by afakili           #+#    #+#             */
/*   Updated: 2022/02/12 14:27:41 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// int main()
// {
// 	t_list *list;
// 	list = ft_lstnew("can");
// 	ft_lstadd_front(&list, ft_lstnew("ahmet"));
// 	ft_lstadd_back(&list, ft_lstnew("fakılı"));
// }