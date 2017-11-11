#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int		i;

	i = ft_strlen(s1);
	while (*s2)
	{
		s1[i] = *s2;
		s2++;
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
