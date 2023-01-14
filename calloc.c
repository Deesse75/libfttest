#include "mes_main.h"

void	main_calloc(void)
{
	int *str1;
	int *str2;
	int n;
	int s;
	int i;

	n = 4;
	s = 0;
	str1 = ft_calloc(n, s);
	str2 = calloc(n, s);
	printf("\nft_calloc\n");
	printf("calloc snemb: %d size: %d\n", n, s);
	i = -1;
	while (++i < s)
		printf("[%d] ", str1[i]);
	printf("\n");
	free(str1);
	i = -1;
	while (++i < s)
		printf("[%d] ", str2[i]);
	printf("\n");
	free(str2);

	n = 4;
	s = 10;
	str1 = ft_calloc(n, s);
	str2 = calloc(n, s);
	printf("calloc snemb: %d size: %d\n", n, s);
	i = -1;
	while (++i < s)
		printf("[%d] ", str1[i]);
	printf("\n");
	free(str1);
	i = -1;
	while (++i < s)
		printf("[%d] ", str2[i]);
	printf("\n");
	free(str2);

	n = 10;
	s = 1;
	str1 = ft_calloc(n, s);
	str2 = calloc(n, s);
	printf("calloc snemb: %d size: %d\n", n, s);
	i = -1;
	while (++i < s)
		printf("[%d] ", str1[i]);
	printf("\n");
	free(str1);
	i = -1;
	while (++i < s)
		printf("[%d] ", str2[i]);
	printf("\n");
	free(str2);

	n = 2;
	s = 5;
	str1 = ft_calloc(SIZE_MAX, s);
	str2 = calloc(n, s);
	printf("calloc snemb: %ld size: %d\n", SIZE_MAX, s);
/*	i = -1;
	while (++i < s)
		printf("[%d] ", str1[i]);
	printf("\n");
	free(str1);
	i = -1;
	while (++i < s)
		printf("[%d] ", str2[i]);
*/	printf("\n");
	free(str2);

	n = 2;
	s = 5;
	str1 = ft_calloc(n, SIZE_MAX);
	str2 = calloc(n, s);
	printf("calloc snemb: %d size: %ld\n", n, SIZE_MAX);
/*	i = -1;
	while (++i < s)
		printf("[%d] ", str1[i]);
	printf("\n");
	free(str1);
	i = -1;
	while (++i < s)
		printf("[%d] ", str2[i]);
*/	printf("\n");
	free(str2);

	str1 = ft_calloc(SIZE_MAX, SIZE_MAX);
	str2 = calloc(n, s);
	printf("calloc snemb: %ld size: %ld\n", SIZE_MAX, SIZE_MAX);
/*	i = -1;
	while (++i < s)
		printf("[%d] ", str1[i]);
	printf("\n");
	free(str1);
	i = -1;
	while (++i < s)
		printf("[%d] ", str2[i]);
*/	printf("\n");
	free(str2);
}
