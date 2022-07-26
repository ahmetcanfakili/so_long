/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:24:46 by afakili           #+#    #+#             */
/*   Updated: 2022/02/12 14:24:46 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int arg)
{
	return ((arg >= 'a' && arg <= 'z') || (arg >= 'A' && arg <= 'Z'));
}

// int main()
// {
// 	char a, b;
// 	a = 'a';
// 	b = '5';
// 	printf("%d", ft_isalpha(a));
// 	printf("\n%d", ft_isalpha(b));
// }