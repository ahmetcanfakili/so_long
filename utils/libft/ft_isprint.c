/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:28:53 by afakili           #+#    #+#             */
/*   Updated: 2022/02/12 14:28:53 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int arg)
{
	return (arg >= ' ' && arg <= '~');
}

// int main()
// {
// 	char a = '~', b = '\0';
// 	printf("%d", ft_isprint(a));
// 	printf("\n%d", ft_isprint(b));
// }