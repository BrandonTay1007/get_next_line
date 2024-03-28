/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twei-yo- <twei-yo-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 08:48:13 by twei-yo-          #+#    #+#             */
/*   Updated: 2024/03/28 17:45:09 by twei-yo-         ###   ########.fr       */
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

char	*ft_strchr(const char *src, int c)
{
	while (*src)
	{
		if ((unsigned char)*src == (unsigned char)c)
			return ((char *)src);
		src++;
	}
	if (!(unsigned char)c)
		return ((char *)src);
	return (NULL);
}

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size)
	{
		while (i + 1 < size && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*a;

	i = 0;
	a = malloc((sizeof(char) * ft_strlen(src)) + 1);
	if (!a)
		return (NULL);
	while (src[i])
	{
		a[i] = src[i];
		i++;
	}
	a[i] = '\0';
	return (a);
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