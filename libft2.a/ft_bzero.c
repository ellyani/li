#include "libft.h"

void   ft_bzero(void *s, size_t n)
{
    size_t  i;
    unsigned    char *l;

    l = (unsigned char *)s;
    i = 0;

    while(i < n)
    {
        *(l + i) = 0;
        i++;
    }
    return (l);
}