/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twei-yo- <twei-yo-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 08:48:10 by twei-yo-          #+#    #+#             */
/*   Updated: 2024/03/28 18:31:52 by twei-yo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		c_nl(char *src, int b_read)
{
	int	i;

	i = 0;
	while (i < b_read)
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
	char	*buf;

	i = 0;
	while (src[i] != '\n')
		i++;
	buf = malloc(i + 1);
	if (!buf)
		return (NULL);
	ft_strlcpy(buf, src, i + 1);
	free(buf);
	return (src);
}

char *get_next_line(int fd)
{
	static char	*str; //to store the excess string after \n
	char 		*buffer; //to check if there is \n in the stirng?
	char		*s;
	int			b_read;

	if (BUFFER_SIZE > INT_MAX / 2 || BUFFER_SIZE <= 0)
		return (NULL);
	str = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if ()
}

int main(int argc, char const *argv[])
{
	int fd;

	fd = open("text.txt", O_RDONLY);
	puts(get_next_line(fd));
}
