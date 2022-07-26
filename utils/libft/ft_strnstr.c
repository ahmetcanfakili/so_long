/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 01:42:53 by afakili           #+#    #+#             */
/*   Updated: 2022/02/13 01:42:53 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (!*needle)
		return ((char *)haystack);
	while (*haystack != '\0' && len-- >= ft_strlen(needle))
	{
		i = 0;
		while (needle[i] == haystack[i])
		{
			i++;
			if (needle[i] == '\0')
				return ((char *)haystack);
		}
		haystack++;
	}
	return (NULL);
}

// int main()
// {
// 	char *s = "ahmet can fakili";
// 	char * s2 = "can";
// 	size_t i = 10;
// 	printf("%s", ft_strnstr(s, s2, i));
// }