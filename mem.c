#include "mes_main.h"

void	main_mem(void)
{
	printf("\nft_bzero\n");
	char s1[] = "Bonjour les jeunes";
	char s2[] = "Bonjour les jeunes";
	int len = (int)ft_strlen(s1);
	ft_bzero(s1, 4);
	bzero(s2, 4);
	int i = -1;
	printf("ft_bzero: ");
	while (++i < len)
		printf("%c", s1[i]);
	i = -1;
	printf("\n");
	printf("bzero   : ");
	while (++i < len)
		printf("%c", s2[i]);
	printf("\n");

	char s3[] = "Bonjour \0les jeunes";
	char s4[] = "Bonjour \0les jeunes";
	ft_bzero(s3, 10);
	bzero(s4, 10);
	i = -1;
	printf("ft_bzero: ");
	while (++i < len + 1)
		printf("%c", s3[i]);
	i = -1;
	printf("\n");
	printf("bzero   : ");
	while (++i < len + 1)
		printf("%c", s4[i]);

	printf("\n\nft_memset\n");
	char ss1[] = "Bonjour les jeunes";
	char ss2[] = "Bonjour les jeunes";
	len = (int)ft_strlen(ss1);
	ft_memset(ss1, 'X', 8);
	memset(ss2, 'X', 8);
	printf("ft_memset: %s\n", ss1);
	printf("memset   : %s\n", ss2);
	ft_memset(ss1, 'u', 2);
	memset(ss2, 'u', 2);
	printf("ft_memset: %s\n", ss1);
	printf("memset   : %s\n", ss2);
	ft_memset(ss1, 'u', len + 10);
	printf("ft_memset: %s\n", ss1);
	ft_memset(ss1, 'u', 0);
	printf("ft_memset: %s\n", ss1);
	printf("\n");

	printf("\nft_memcpy\n");
	char src1[] = "Bonjour les enfants";
	char dst1[] = "Ananas frais";
	char src2[] = "Bonjour les enfants";
	char dst2[] = "Ananas frais";
	ft_memcpy(dst1, src1, 3);
	memcpy(dst2, src2, 3);
	printf("ft_memcpy: %s\n", dst1);
	printf("memcpy   : %s\n", dst2);
	ft_memcpy(src1, dst1, 10);
	memcpy(src2, dst2, 10);
	printf("ft_memcpy: %s\n", src1);
	printf("memcpy   : %s\n", src2);


	printf("\nft_memmove\n");
	char src3[] = "Bonjour les enfants";
	char src4[] = "Bonjour les enfants";
	ft_memmove(&src3[3], src3, 5);
	memmove(&src4[3], src4, 5);
	printf("ft_memmove: %s\n", &src3[3]);
	printf("memmove   : %s\n", &src4[3]);
	ft_memmove(src1, src3, 5);
	memmove(src2, src4, 5);
	printf("ft_memmove: %s\n", src1);
	printf("memmove   : %s\n", src2);
}
