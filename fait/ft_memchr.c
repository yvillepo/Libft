#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	ch;
	unsigned char	*s_ptr;

	if (!s)
		return (NULL);
	ch = (unsigned char)c;
	s_ptr = (unsigned char*)s;
	while (n)
	{
		if (*s_ptr == ch)
			return ((void*)s_ptr);
		s_ptr++;
		n--;
	}
	return (NULL);
}
