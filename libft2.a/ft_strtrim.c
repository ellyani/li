#include "libft.h"

int is_in_set (char c , char *set) // دالة للمساعدة للتحقق مما إذا كان الحرف يجب إزالته
{
    while (*set)
    {
        if (c == *set)
        {
            return (1); // الحرف موجود في المجموعة
        }
        set++;
    }
    return (0); // الحرف غير موجود
}
char *ft_strtrim(char const *s1, char const *set)
{
    size_t  start ;
    size_t  end;

    start = 0;
    end = ft_strlen(s1);

    while (is_in_set(s1[start] , set) && start < end ) // البحث عن بداية السلسلة

    {
        start++;
    }
    while (is_in_set(s1[end - 1] ,set) && end > start) // البحث عن نهاية السلسلة
    {
        end--;
    }
    char *trimmed = (char *)malloc(end - start + 1); // إنشاء السلسلة الجديدة
    if (!trimmed)
        return (NULL);
    
    strncpy (trimmed , s1 + start , s1 - end); // نسخ الجزء المُعدّل إلى السلسلة الجديدة
    trimmed[end - start] = '\0';

    return trimmed;
}