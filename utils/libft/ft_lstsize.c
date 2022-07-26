/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:27:04 by afakili           #+#    #+#             */
/*   Updated: 2022/02/12 14:27:04 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	length;

	length = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		length++;
	}
	return (length);
}

// int main()
// {
// 	int len;
// 	t_list *list;
// 	list = ft_lstnew("Ahmet");
// 	ft_lstadd_back(&list, ft_lstnew("Can"));
// 	ft_lstadd_back(&list, ft_lstnew("Fakılı"));
// 	len = ft_lstsize(list);
// 	printf("%d", len);
// }