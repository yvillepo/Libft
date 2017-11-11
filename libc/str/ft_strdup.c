#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		length;
	char	*str;

	length = ft_strlen(s1);
	if (!(str = (char*)malloc(sizeof(*s1) * (length + 1))))
		return (NULL);
	ft_strcpy(str, s1);
	return (str);
}
