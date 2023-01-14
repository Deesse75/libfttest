#include "mes_main.h"

void	main_itoa(void)
{
	printf("\nft_itoa\n");
	char *str = ft_itoa(125);
	printf("125: %s\n", str);
	free(str);

	str = ft_itoa(-125);
	printf("-125: %s\n", str);
	free(str);

	str = ft_itoa(+125);
	printf("+125: %s\n", str);
	free(str);

	str = ft_itoa(-2147483648);
	printf("-2147483648: %s\n", str);
	free(str);

	str = ft_itoa(0);
	printf("0: %s\n", str);
	free(str);

	str = ft_itoa(-0);
	printf("-0: %s\n", str);
	free(str);
}
