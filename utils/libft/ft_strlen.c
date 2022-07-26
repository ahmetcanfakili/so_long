/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:29:23 by afakili           #+#    #+#             */
/*   Updated: 2022/02/12 14:29:23 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *arg)
{
	size_t	i;

	i = 0;
	while (arg[i])
	{
		i++;
	}
	return (i);
}

// int main()
// {
// 	char *str = "ahmet can fakili";
// 	printf("%u", ft_strlen(str));
// }
