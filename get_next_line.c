/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twei-yo- <twei-yo-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 08:48:10 by twei-yo-          #+#    #+#             */
/*   Updated: 2024/03/28 16:29:26 by twei-yo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*find_nl(char* s)
{
	
}

char *get_next_line(int fd)
{
	static char	*s;
	char *buffer;
	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	
	if (!s || BUFFER_SIZE <= 0 || read(fd, NULL, 0) < 0)
		return (NULL);
	if(read(fd, buffer, BUFFER_SIZE) == 0)
	{
		
	}
	else 
	{
		//now BUFFERSIZE is not enough to read until end
		//i need to find whether there is \n first
		//if yes find 
	}
	
	
}

int main(int argc, char const *argv[])
{
	int fd;

	fd = open("text.txt", O_RDONLY);
	get_next_line(fd);
}
