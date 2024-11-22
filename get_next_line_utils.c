/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:49:47 by lde-merc          #+#    #+#             */
/*   Updated: 2024/11/20 16:49:01 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*exit;

	if (size && (nmemb > SIZE_MAX / size))
		return (NULL);
	exit = (void *)malloc(nmemb * size);
	if (!exit)
		return (NULL);
	ft_bzero(exit, nmemb * size);
	return (exit);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	s1_size;
	size_t	s2_size;
	size_t	i;

	i = 0;
	s1_size = ft_strlen(s1);
	s2_size = ft_strlen(s2);
	str = (char *)malloc((s1_size + s2_size + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (i < s1_size)
	{
		str[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < s2_size)
	{
		str[s1_size + i] = s2[i];
		i++;
	}
	str[s1_size + i] = '\0';
	return (str);
}

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = -1;
	ptr = (unsigned char *)s;
	while (++i < n)
		ptr[i] = 0;
}

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	size;
	char	*s2;

	i = 0;
	size = ft_strlen(s) + 1;
	s2 = (char *)s;
	while (i < size)
	{
		if (s2[i] == c % 256)
			return (s2 + i);
		i++;
	}
	return (NULL);
}

size_t	ft_strlen(const char *s)
{
	size_t	c;

	c = 0;
	while (s[c])
		c++;
	return (c);
}
