#include "mes_main.h"

void	main_atoi(void)
{
	printf("\n");
	printf("ft_atoi : %d\n", ft_atoi("152451"));
	printf("atoi    : %d\n", atoi("152451"));	
	printf("ft_atoi : %d\n", ft_atoi("   \t\t  -1548"));
	printf("atoi    : %d\n", atoi("   \t\t  -1548"));
	printf("ft_atoi : %d\n", ft_atoi(" --+542"));
	printf("atoi    : %d\n", atoi(" --+542"));	
	printf("ft_atoi : %d\n", ft_atoi("  +542"));
	printf("atoi    : %d\n", atoi("  +542"));	
	printf("ft_atoi : %d\n", ft_atoi("  +542    "));
	printf("atoi    : %d\n", atoi("  +542    "));	
	printf("ft_atoi : %d\n", ft_atoi("-2147483648"));
	printf("atoi    : %d\n", atoi("-2147483648"));	
	printf("ft_atoi : %d\n", ft_atoi("2147483647"));
	printf("atoi    : %d\n", atoi("2147483647"));	
	printf("ft_atoi : %d\n", ft_atoi("0"));
	printf("atoi    : %d\n", atoi("0"));	
	printf("ft_atoi : %d\n", ft_atoi("maison"));
	printf("atoi    : %d\n", atoi("maison"));	
}
