/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:50:03 by lde-merc          #+#    #+#             */
/*   Updated: 2024/11/20 17:37:30 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);

char	*ft_pickline(char *remainder);

char	*ft_read_file(int fd, char *rest);

char    *ft_free(char *buffer, char *buf);

char	*ft_update(char *rest);

void	*ft_calloc(size_t nmemb, size_t size);

char	*ft_strjoin(char const *s1, char const *s2);

void	ft_bzero(void *s, size_t n);

char	*ft_strchr(const char *s, int c);

size_t	ft_strlen(const char *s);

#endif