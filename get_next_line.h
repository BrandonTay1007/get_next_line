/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twei-yo- <twei-yo-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 08:48:15 by twei-yo-          #+#    #+#             */
/*   Updated: 2024/05/25 16:42:11 by twei-yo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

# include <errno.h>
# include <fcntl.h>
# include <stdio.h>
# include <unistd.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <limits.h>

char	*get_next_line(int fd);
size_t	ft_strlcpy(char *dest, char *src, size_t size);
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *src, int c);
char	*ft_strdup(char *src);
char	*ft_strjoin(char const *s1, char const *s2);

#endif