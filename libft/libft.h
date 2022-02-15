/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnimwata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 11:12:54 by pnimwata          #+#    #+#             */
/*   Updated: 2022/02/15 11:12:54 by pnimwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef _WIN64
    typedef unsigned __int64 size_t;
#else
    typedef unsigned int size_t;
#endif

#ifndef _SIZE_T_DEFINED
# define _SIZE_T_DEFINED
#endif

#ifndef LIBFT_H
# define LIBFT_H

/*int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
size_t ft_strlen(int c);
size_t *ft_memset(void *s, int c, size_t n);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
size_t  ft_strlcpy(char *dest, char const *src, size_t n);
size_t  ft_strlcat(char *dest, const char *src, size_t n);
int ft_toupper(int c);
int ft_tolower(int c);
char *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
char    *ft_strnstr(const char *big, const char *little, size_t n);
int     ft_atoi(const char *nptr);
void    *ft_calloc(size_t nmemb, size_t size);
char    *ft_strdup(char const *s);
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strtrim(char const *s, char c);
char    **ft_split(char const *s, char c);
char    *ft_itoa(int n);
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void    *ft_striteri(char *s, void (*f)(unsigned int, char *));
void    ft_purchar_fd(char c, int fd);
void    ft_putstr_fd(char *s, int fd);
void    ft_putendl_fd(char *s, int fd);
void    ft_putnbr_fd(int n, int fd);
*/

size_t     ft_strlen(char const *s);

#endif

