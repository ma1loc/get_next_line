#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H


# ifndef BUFFER_SIZE
# define BUFFER_SIZE 1
# endif

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
// remove the strio.h
#include <stdio.h>

char	*get_next_line(int fd);
size_t  ft_strlen(char *str);
char	*ft_strncpy(char *dst, char *src, int nbyte);
char    *ft_strchr(char *str, char c);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(char *str);

# endif
