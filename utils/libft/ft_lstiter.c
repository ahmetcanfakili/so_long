/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:26:43 by afakili           #+#    #+#             */
/*   Updated: 2022/02/12 14:26:43 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
	return ;
}

// void	func(void *arg)
// {
// 	while(*str)
// 		write(1, arg++, 1);
// }

// int main()
// {
// 	t_list *list;
// 	list = lst_new("Ahmet");
// 	ft_lstadd_back(&list, ft_lstnew("Can"));
// 	ft_lstadd_back(&list, ft_lstnew("Fakılı"));
// 	ft_lstiter(list, func);
// }