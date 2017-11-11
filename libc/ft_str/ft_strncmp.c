#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	if (n == 0)
		return (0);
	ptr1 = (unsigned char*)s1;
	ptr2 = (unsigned char*)s2;
	while (*ptr1 == *ptr2 && n-- > 0)
	{
		if (*ptr1 == 0)
			return (0);
		ptr1++;
		ptr2++;
	}
	return (*ptr1 - *ptr2);
}
