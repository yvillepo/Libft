#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	cc;
	unsigned char	*d;
	unsigned char	*s;

	cc = (unsigned char)c;
	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	while (n--)
	{
		if ((*d++ = *s++) == cc)
			return (d);
	}
	return (NULL);
}
