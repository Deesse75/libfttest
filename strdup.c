#include "mes_main.h"

void	main_strdup(void)
{
	char *src = "bonjour tout le monde";
	char *dest1;
	char *dest2;

	dest1 = ft_strdup(src);
	dest2 = strdup(src);

	printf("\nft_strdup\n");
	printf("src      :\t%p %s\n", src, src);
	printf("ft_strdup:\t%p %s\n", dest1, dest1);
	printf("strdup   :\t%p %s\n", dest2, dest2);
	free(dest1);
	free(dest2);
}
