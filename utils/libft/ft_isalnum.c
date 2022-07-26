/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:24:40 by afakili           #+#    #+#             */
/*   Updated: 2022/02/12 14:24:40 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int arg)
{
	return ((arg >= 'a' && arg <= 'z') || (arg >= 'A' && arg <= 'Z')
		|| (arg >= '0' && arg <= '9'));
}

// int main()
// {
// 	char a, b;
// 	a = 'A';
// 	b = '3';
// 	printf("%d", ft_isalnum(a));
// 	printf("\n%d", ft_isalnum(b));
// }