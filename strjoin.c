#include "mes_main.h"

void	main_strjoin(void)
{
	char *dest1;

	char *s1 = "bon";
	char *s2 = "jour";
	dest1 = ft_strjoin(s1, s2);
	printf("\nft_strjoin\n");
	printf("s1: %s  s2: %s\n", s1, s2);
	printf("attendu: bonjour\nrendu  :%s\n", dest1);
	free(dest1);
	char *s3 = "";
	char *s4 = "jour";
	dest1 = ft_strjoin(s3, s4);
	printf("s1: %s  s2: %s\n", s3, s4);
	printf("attendu: jour\nrendu  :%s\n", dest1);
	free(dest1);
	char *s5 = "bon";
	char *s6 = "";
	dest1 = ft_strjoin(s5, s6);
	printf("s1: %s  s2: %s\n", s5, s6);
	printf("attendu: bon\nrendu  : %s\n", dest1);
	free(dest1);
	char *s7 = "";
	char *s8 = "";
	dest1 = ft_strjoin(s7, s8);
	printf("s1: %s  s2: %s\n", s7, s8);
	printf("attendu:\nrendu:\t%s\n", dest1);
	free(dest1);
	dest1 = ft_strjoin(NULL, NULL);
	printf("s1: NULL  s2: NULL\n");
	printf("attendu: (null)\nrendu  : %s\n", dest1);
	free(dest1);
}
