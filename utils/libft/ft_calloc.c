/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:24:30 by afakili           #+#    #+#             */
/*   Updated: 2022/02/12 14:24:30 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	size_t	a;
	void	*ptr;

	a = n * size;
	ptr = malloc(a);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, a);
	return (ptr);
}

// int main()
// {
// 	char *str;
// 	str = (char *)calloc(5, sizeof(int));
// 	printf("%d,%d,%d,%d,%d", str[0],str[1],str[2],str[3],str[4]);
// }