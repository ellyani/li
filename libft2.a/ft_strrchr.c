#include "libft.h"

char *strrchr(const char *s, int c)
{
    int i;

    i = ft_strlen(s);
    if (c == 0)
    {
        return (s[i] + i);
    }
    while (i >= 0)
    {
        if (s[i] == c)
        {
            return (s[i] + i);
        }
        i--;
    }
    return (0);
}

