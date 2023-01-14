#include "mes_main.h"

void	main_substr(void)
{
	char *dest1;

	printf("\nft_substr\n");
	dest1 = ft_substr("bonjour", 3, 4);
	printf("attendu: jour\nrendu  :%s\n", dest1);
	free(dest1);
	dest1 = ft_substr("yoga", 0, 30);
	printf("attendu: yoga\nrendu  :%s\n", dest1);
	free(dest1);
	dest1 = ft_substr("veste", 30, 4);
	printf("attendu: \nrendu  :%s\n", dest1);
	free(dest1);
	dest1 = ft_substr("", 3, 5);
	printf("attendu: \nrendu  :%s\n", dest1);
	free(dest1);
	dest1 = ft_substr("", 0, 5);
	printf("attendu: \nrendu  :%s\n", dest1);
	free(dest1);
	dest1 = ft_substr(NULL, 3, 5);
	printf("attendu: (null)\nrendu  :%s\n", dest1);
	free(dest1);
	dest1 = ft_substr(NULL, 0, 5);
	printf("attendu: (null)\nrendu  :%s\n", dest1);
	free(dest1);
	dest1 = ft_substr("avion", -1, 5);
	printf("attendu: \nrendu  :%s\n", dest1);
	free(dest1);
	dest1 = ft_substr("dortoir", 0, -5);
	printf("attendu: dortoir\nrendu  :%s\n", dest1);
	free(dest1);
}
