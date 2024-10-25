#include "libft.h"

size_t  ft_strlen(const char *s)
{
    int i;
    while(s[i])
    {
        i++;
    }
    return (i);
}