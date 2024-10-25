#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t  counter;
    counter = 0;
    while (counter < n)
    {
        *((char *)dst + counter) = *((char *)src + counter);
        counter++;
    }
    return (dst);
}