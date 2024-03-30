/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twei-yo- <twei-yo-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 08:48:10 by twei-yo-          #+#    #+#             */
/*   Updated: 2024/03/30 15:13:14 by twei-yo-         ###   ########.fr       */
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
	dest = malloc(i + 1);
	if (!dest)
		return (0);
	ft_strlcpy(dest, src, i + 1);
	return (dest);
}

char *get_next_line(int fd)
{
	static char		*left_s; //to store the excess string after \n
	char 		*buffer; //to check if there is \n in the stirng?
	char		*s;
	int			b_read;

	if (BUFFER_SIZE > INT_MAX / 2 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	if (!left_s)
		ft_strdup("");
	b_read = read(fd, buffer, BUFFER_SIZE);
	
	
	return (s);
}

int main(int argc, char const *argv[])
{
	int fd;

	fd = open("text.txt", O_RDONLY);
	//char *h = get_next_line(fd);
	char *a = malloc(10);
	puts(a);
	printf("---------------------------\n");
	// h = get_next_line(fd);
	// printf("second H: %s", h);
}
