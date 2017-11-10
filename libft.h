/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvillepo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 14:56:24 by yvillepo          #+#    #+#             */
/*   Updated: 2017/11/10 17:56:44 by yvillepo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n);
void 	ft_bzero(void *s, size_t n);
void 	*ft_memcpy(void *dest, const void *src, size_t n);
void 	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void 	*ft_memmove(void *dest, const void *src, size_t n);
void 	*ft_memchr(const void *s, int c, size_t n);
int 	ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlen(const char *s);
char 	*ft_strdup(const char *s);
char 	*ft_strcpy(char *dest, const char *src);
char 	*ft_strncpy(char *dest, const char *src, size_t n);
char 	*ft_strcat(char *dest, const char *src);
char 	*ft_strncat(char *dest, const char *src, size_t n);
size_t 	ft_strlcat(char *dst, const char *src, size_t size);
char 	*ft_strchr(const char *s, int c);
char 	*ft_strrchr(const char *s, int c);
char 	*ft_strstr(const char *haystack, const char *needle);
char 	*ft_strnstr(const char	*big, const char *little, size_t len);
int 	ft_strcmp(const char *s1, const char *s2);
int 	ft_strncmp(const char *s1, const char *s2, size_t n);
int 	ft_atoi(const char *nptr);
int 	ft_isalpha(int c);
int 	ft_isdigit(int c);
int 	ft_isalnun(int c);
int 	ft_isascii(int c);
int 	ft_isprint(int c);
int 	ft_toupper(int c);
int 	ft_tolower(int c);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
