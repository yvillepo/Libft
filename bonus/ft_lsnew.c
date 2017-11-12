#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new;
	
	if(!(new = (t_list*)malloc(sizeof(t_list))))
			return (NULL);
	t_list->content = content;
	t_list->content_siwe = content_size;
	return (new);
}
