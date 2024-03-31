/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twei-yo- <twei-yo-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 08:48:10 by twei-yo-          #+#    #+#             */
/*   Updated: 2024/03/31 15:46:44 by twei-yo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		c_nl(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		if (src[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}
char	*fill_line(char* src)
{
	long long	i;
	char	*buf;
	char	*dest;

	i = 0;
	while (src[i] != '\n' && src[i] != '\0')
		i++;
	buf = malloc(i + 2);
	if (!buf)
		return (NULL);
	ft_strlcpy(buf, src, i + 2);
	dest = buf;
	if (dest)
		free(buf);
	return (dest);
}
char	*fill_buf(int fd, char* left_s, char* buf)
{
	int			b_read;

	if (left_s)
		ft_strlcpy(buf, left_s, ft_strlen(left_s));
	while(!c_nl(buf))
	{
		b_read = read(fd, buf, BUFFER_SIZE);
		if (b_read <= 0)
			break;
		else
		{
			if (!left_s)
				left_s = ft_strdup(buf);
			else
			{
				free(left_s);
				left_s = ft_strjoin(left_s, buf);
			}
		}
	}
	return (left_s);
}
char	*get_next_line(int fd)
{
	static char		*left_s;
	char 		*buffer;
	char		*s;
	
	if (BUFFER_SIZE <= 0 || fd < 0 || read(fd, 0 ,0) < 0)
		return (NULL);
	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	left_s = fill_buf(fd, left_s, buffer);
	free(buffer);
	if (!left_s)
		return (NULL);
	s = fill_line(left_s);
	left_s = ft_strchr(left_s, '\n');
	if (left_s != NULL && *(left_s + 1) != '\0')
		left_s++;
	else
		left_s = NULL;
	return (s);
}

/* int main(int argc, char const *argv[])
{
	int fd;
	char *h;
	fd = open("text.txt", O_RDONLY);
	h = get_next_line(fd);
	puts(h);
	h = get_next_line(fd);
	puts(h);
	h = get_next_line(fd);
	puts(h);
	h = get_next_line(fd);
	puts(h);
	h = get_next_line(fd);
	puts(h);
} */