/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:28:31 by afakili           #+#    #+#             */
/*   Updated: 2022/02/12 14:28:31 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*str2;

	len = ft_strlen(str);
	str2 = (char *)malloc(sizeof(char) * (len + 1));
	if (str2 == NULL)
		return (NULL);
	str2[len] = 0;
	while (len--)
		str2[len] = str[len];
	return (str2);
}

// int main()
// {
// 	char *str = "deneme1 deneme2 deneme3";
// 	printf("%s", ft_strdup(str));
// }