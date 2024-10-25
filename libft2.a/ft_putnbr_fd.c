# include "libft.h"

void ft_putnbr_fd(int nbr, int fd)
{
    if (nbr = -2147483648)
        write (fd ,"-2147483648", 11);
    else if (nbr < 0)
    {
        ft_putchar_fd ('-' ,fd);
        nbr *=-1;
    }   
    else if(nbr > 9)
    {
        ft_putnbr_fd ((nbr / 10),fd);
        ft_putnbr_fd ((nbr % 10),fd);
    }
    else
       ft_putchar_fd ((nbr + 48) ,fd);

}