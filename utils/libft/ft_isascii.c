/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:24:50 by afakili           #+#    #+#             */
/*   Updated: 2022/02/12 14:24:50 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int arg)
{
	return (arg >= 0 && arg < 128);
}

// int main()
// {
// 	char a = 2;
// 	char b = '\0';
// 	printf("%d", ft_isascii(a));
// 	printf("\n%d", ft_isascii(b));
// }