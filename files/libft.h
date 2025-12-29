#ifndef FT_LIBFT_H

# define FT_LIBFT_H
# define BUFF_SIZE 4096
# define BUFF_SIZE_IN 1
# define FDS 65535
# define NFLAGS 5
# define NLENS 6

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include <wchar.h>
# include <stdarg.h>

int		ft_atoi(const char *str);
int	    ft_iswhitespace(char c);
int	    ft_isoperator(char c);
int     ft_isdigoupperit(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_isupper(int c);
int		ft_islower(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
char	*ft_strcpy(char *dest, const char *src);
void	ft_putchar(char c_char);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr(const char *s);
void    ft_putstr_fd(const char *s, int fd);
void	ft_putnbr(int nb);
void	ft_swap(int *a, int *b);
void	ft_swap_xor(int *a, int *b);
size_t	ft_strlen(const char *str);

#endif