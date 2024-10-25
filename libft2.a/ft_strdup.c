# include "libft.h"

char *ft_strdup(const char *src)
{
    char    *copy;
    size_t     l;

    copy = (char *)malloc(l + 1);
    l = ft_strlen(src);
   
    if (copy == NULL)
        return (NULL);
    strcpy(copy,src);
    return (copy);
}