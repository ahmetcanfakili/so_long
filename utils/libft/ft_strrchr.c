/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:25:28 by afakili           #+#    #+#             */
/*   Updated: 2022/02/12 14:25:28 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int character)
{
	size_t	i;

	i = ft_strlen(str) + 1;
	while (i > 0)
	{
		i--;
		if (str[i] == (char)character)
			return ((char *)(str + i));
	}
	return (NULL);
}

// int main()
// {
// 	char *str = "ahmet can fakili";
// 	int c = 'f';
// 	printf("%s", ft_strrchr(str, c));
// }