/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:29:02 by afakili           #+#    #+#             */
/*   Updated: 2022/02/12 14:29:02 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int arg)
{
	return (arg >= '0' && arg <= '9');
}

// int main()
// {
// 	char a = '5';
// 	char b = 'x';
// 	printf("%d", ft_isdigit(a));
// 	printf("\n%d", ft_isdigit(b));
// }