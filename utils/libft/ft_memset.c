/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:27:45 by afakili           #+#    #+#             */
/*   Updated: 2022/02/12 14:27:45 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *arr, int c, size_t n)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)arr;
	while (n--)
		*tmp++ = c;
	return (arr);
}

// int main()
// {
// 	char str[] = "ahmet ";
// 	char a = 'x';
// 	printf("%s", ft_memset(str, a, 3));
// }