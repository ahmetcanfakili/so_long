/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:45:23 by afakili           #+#    #+#             */
/*   Updated: 2022/02/20 14:45:23 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

size_t			ft_strlen1(char *str);
char			*ft_strchr1(char *s, int c);
char			*ft_strjoin1(char *s1, char *s2);
char			*get_next_line(int fd);
char			*ft_line(char *save);
char			*ft_save(char *save);
char			*ft_rd_sv(int fd, char *save);

#endif