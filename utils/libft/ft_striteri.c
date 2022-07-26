/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:28:33 by afakili           #+#    #+#             */
/*   Updated: 2022/02/12 14:28:33 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i] && f)
	{
		f(i, (&s[i]));
		i++;
	}
}

// void func(unsigned int a, char *b)
// {
// 	printf("\n%d. karakter = %c", a, *b);
// }

// int main()
// {
// 	char *str = "ahmet can deneme1";
// 	ft_striteri(str, func);
// }