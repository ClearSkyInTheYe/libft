/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chfederi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:32:41 by chfederi          #+#    #+#             */
/*   Updated: 2021/10/04 18:32:44 by chfederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include<unistd.h>
# include<stdlib.h>
# include<stdint.h>

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	*ft_memset(void *m, int v, size_t l);
void	*ft_memcpy(void *destp, const void *srcp, size_t n);
void	*ft_memmove(void *destp, const void *srcp, size_t nu);
void	*ft_memchr(const void *memp, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	ft_putendl_fd(char const *s, int fd);
void	*ft_calloc( size_t n, size_t size );
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strdup(const char *s1);
char	*ft_strchr(const char	*str, int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_strnstr(const char *hay, const char *needle, size_t len);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	**ft_split(char const *s, char c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_isprint(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_atoi(const char *str);
int		ft_memcmp(const void *memp1, const void *memp2, size_t n);
int		ft_toupper(int c);
int		ft_tolower(int c);
size_t	ft_strlen(const char *str);
size_t	ft_strlcat(char *dst, const char *src, size_t dsz);
size_t	ft_strlcpy(char *dst, const char *src, size_t dsz);

#endif