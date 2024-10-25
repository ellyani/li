#include "libft.h"

int ft_set_nb (int nbr)
{
    int i;
    i = 0;
    if (nbr <= 0)
        i++;
    while (nbr)
    {
        nbr /=10;
        i++;
    }
    return (i);
}
char *ft_itoa_handl(long n)
{
    char *p;
    int nb;
    
    nb = ft_set_nb(n);
    p = malloc (sizeof(char) * (nb + 1));

    if (!p)
        return (0);
    p[nb] = '\0';
    if (n < 0)
    {
        p[0] = '-';
        n *=-1;
    }
    else if(n == 0)
    {
        p[0] = '0';
    } 
    while (n)
    {
        --nb;
        p[nb] = (n % 10) + 48;
        n /= 10;
    }
    return (p);
}
char *ft_itoa (int n)
{
    return (ft_itoa_handl (n));
}
/*int main(){
    int n = 1406266;

     printf("%s",ft_itoa (n));
}
*/