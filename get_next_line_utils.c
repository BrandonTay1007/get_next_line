/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twei-yo- <twei-yo-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 08:48:13 by twei-yo-          #+#    #+#             */
/*   Updated: 2024/03/27 10:54:43 by twei-yo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
		size_t	i;

		i = 0;
		while (s[i])
			i++;
		return (i);
}

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size && dest[i])
	{
		i++;
	}
	if (i < size)
	{
		while (i + 1 < size && *src && size)
		{
			dest[i] = *src;
			src++;
			i++;
		}
		dest[i] = '\0';
	}
	while (*src)
	{
		i++;
		src++;
	}
	return (i);
}