#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    if (!s1 || !s2)
        return (NULL);
    
    size_t  l1;
    size_t  l2;

    l1 = ft_strlen(s1);
    l2 = ft_strlen(s2);

    char *s3 = (char *)malloc(l1 + l2 + 1);
    if (!s3)
        return (NULL);
    
    strcpy (s3 , s1);
    strcpy (s3 , s2);

    return (s3);

}