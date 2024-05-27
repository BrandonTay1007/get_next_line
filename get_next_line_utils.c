/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twei-yo- <twei-yo-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 08:48:13 by twei-yo-          #+#    #+#             */
/*   Updated: 2024/05/26 21:28:44 by twei-yo-         ###   ########.fr       */
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
	if (src)
	{
		while (*src)
		{
			if ((unsigned char)*src == (unsigned char)c)
				return ((char *)src);
			src++;
		}
		if (!(unsigned char)c)
			return ((char *)src);	
	}
	return (NULL);
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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	int		i;
	int		j;

	j = -1;
	i = -1;
	if (!s1 || !s2)
		return (NULL);
	s = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!s)
		return (NULL);
	while (s1[++i])
		s[++j] = s1[i];
	i = -1;
	while (s2[++i])
		s[++j] = s2[i];
	s[++j] = '\0';
	return (s);
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
