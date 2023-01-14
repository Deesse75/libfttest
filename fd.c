#include "mes_main.h"


void	main_fd(void)
{
	ft_putchar_fd('b', 0);
	ft_putchar_fd('o', 0);
	ft_putchar_fd('n', 0);
	ft_putchar_fd('j', 0);
	ft_putchar_fd('o', 0);
	ft_putchar_fd('u', 0);
	ft_putchar_fd('r', 0);
	ft_putchar_fd('\n', 0);
	ft_putchar_fd('\n', 0);


	ft_putstr_fd("comment", 0);
	ft_putchar_fd('\n', 0);
	ft_putstr_fd("ca", 0);
	ft_putchar_fd('\n', 0);
	ft_putstr_fd("va", 0);
	ft_putchar_fd('\n', 0);
	ft_putchar_fd('\n', 0);
	
	ft_putnbr_fd(15847, 0);
	ft_putchar_fd('\n', 0);
	ft_putnbr_fd(+1547, 0);
	ft_putchar_fd('\n', 0);
	ft_putnbr_fd(-2147483648, 0);
	ft_putchar_fd('\n', 0);
	ft_putnbr_fd(2147483647, 0);
	ft_putchar_fd('\n', 0);
	ft_putnbr_fd(0, 0);
	ft_putchar_fd('\n', 0);
	ft_putchar_fd('\n', 0);
}
