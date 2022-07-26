/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 02:28:26 by afakili           #+#    #+#             */
/*   Updated: 2022/02/13 02:28:26 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		index;
	int		indexx;

	indexx = 0;
	index = 0;
	dest = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	while (s1[index] != '\0')
	{
		dest[index] = s1[index];
		index++;
	}
	while (s2[indexx] != '\0')
	{
		dest[index] = s2[indexx];
		indexx++;
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

// int main()
// {
// 	char *s1 = "ahmet";
// 	char *s2 = "can";
// 	printf("%s", ft_strjoin(s1, s2));
// }