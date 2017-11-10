#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*pt;
	char	locate;

	locate = c;
	pt = (char*)s;
	while (*pt)
	{
		if (*pt == locate)
			return (pt);
		pt++;
	}
	if (*pt == locate)
		return (pt);
	else
		return (NULL);
}
