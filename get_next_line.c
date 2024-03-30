/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twei-yo- <twei-yo-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 08:48:10 by twei-yo-          #+#    #+#             */
/*   Updated: 2024/03/30 16:47:17 by twei-yo-         ###   ########.fr       */
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
char	*set_line(char* src)
{
	long long	i;
	char	*dest;

	i = 0;
	while (src[i] != '\n' && src[i] != '\0')
		i++;
	dest = malloc(i + 2);
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, src, i + 2);
	return (dest);
}

char *get_next_line(int fd)
{
	static char		*left_s;
	char 		*buffer;
	char		*s;
	int			b_read;

	if (BUFFER_SIZE > INT_MAX / 2 || BUFFER_SIZE <= 0)
		return (NULL);

	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
		
	b_read = read (fd, buffer, BUFFER_SIZE);
	left_s = ft_strdup(buffer);
	while (b_read && !c_nl(left_s))
	{
		b_read = read (fd, buffer, BUFFER_SIZE);
		if (b_read)
			left_s = ft_strjoin(left_s, buffer);
	}
	printf("Left_s= %s\n", left_s);
	return (0);
}

int main(int argc, char const *argv[])
{
	int fd;
	char *buffer = malloc(100);
	fd = open("text.txt", O_RDONLY);
	char *h = get_next_line(fd);
}