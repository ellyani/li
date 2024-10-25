#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    if (!s || !f) 
        return (NULL);
    size_t  len =ft_strlen(s);
    char    *result = malloc (len +1);
    if (!result)
        return (NULL);
    unsigned int i;
    i = 0;
    while (i < len)
    {
        result[i] = f (i , s[i]);
        i++;
    }
    result[len] = '\0';

    return (result);

}
/*// دالة لتعديل الحروف
char to_upper(unsigned int index, char c) {
    if (c >= 'a' && c <= 'z') {
        return c - 32; // تحويل الحرف الصغير إلى كبير
    }
    return c;
}

// مثال على الاستخدام
int main() {
    const char *str = "hello world";
    char *result = ft_strmapi(str, to_upper);
    
    if (result) {
        printf("الناتج: %s\n", result);
        free(result);
    }
    
    return 0;
}
*/