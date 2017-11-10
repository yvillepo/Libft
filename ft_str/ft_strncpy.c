#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	char	*dst_ptr;

	if (!dst || !src)
		return (NULL);
	dst_ptr = dst;
	while (*src && n > 0)
	{
		n--;
		*dst_ptr++ = *src++;
	}
	*dst_ptr = 0;
	while (n-- > 0)
		*dst_ptr++ = 0;
	return (dst);
}
