/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   libft.h                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: almalfoy <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 11:05:21 by almalfoy     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/03 17:19:54 by almalfoy    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef __FT_LIBFT_H
# define __FT_LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef	struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

int				ft_atoi(const char *str);
int				ft_isalpha(int c);
int				ft_isprint(int c);
void			*ft_memcpy(void *dst, const void *src, size_t n);
char			*ft_strcat (char *dest, const char *src);
char			*ft_strcpy(char *dest, const char *src);
char			*ft_strncpy(char *dest, const char *src, size_t n);
char			*ft_strstr(const char *str, const char *word);
void			ft_bzero(void *s, size_t n);
int				ft_isascii(int c);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
char			*ft_strchr(const char *s, int c);
char			*ft_strdup(const char *s);
char			*ft_strncat(char *s1, const char *s2, size_t n);
char			*ft_strndup(const char *s, unsigned long n);
int				ft_isalnum(int c);
int				ft_isdigit(int c);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memset(void *s, int c, unsigned long n);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strrchr(const char *s, int c);
int				ft_tolower(int c);
int				ft_toupper(int c);
void			*ft_memchr(const void *s, int c, size_t n);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
void			*ft_memalloc(size_t size);
void			ft_memdel(void **ap);
char			*ft_strnew(size_t size);
void			ft_putstr_fd(char const *s, int fd);
void			ft_putendl_fd(char const *s, int fd);
void			ft_putchar(char c);
void			ft_putstr(const char *s);
void			ft_putchar_fd(char c, int fd);
int				ft_strequ(char const *s1, char const *s2);
char			*ft_strtrim(char const *s);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			**ft_strsplit(const char *s, char c);
char			*ft_itoa(int n);
char			*ft_strjoin(char const *s1, char const *s2);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_strmap(char const *s, char (*f)(char));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
void			ft_striter(char *s, void (*f)(char *));
void			ft_strclr(char *s);
void			ft_strdel(char **as);
char			*ft_strnstr(const char *s1, const char *s2, size_t n);
void			ft_putnbr(int n);
void			ft_putnbr_fd(int n, int fd);
void			ft_putendl(char const *s);
t_list			*ft_lstnew(void const *content, size_t content_size);
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void			ft_lstadd(t_list **alst, t_list *new);
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
char			*ft_strrev(char *str);
size_t			ft_strlen(const char *s);
int				ft_nb_pair(int nb);
int				ft_hexa_nb(int c);
#endif
