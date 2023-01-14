#include "mes_main.h"

void	main_strtrim(void)
{
	char *dest;

	printf("\nft_strtrim\n");
	char *s0 = " *-*- b-o*n j -our **  ";
	dest = ft_strtrim(s0, " *-");
	printf("set \" *-\" \tstr: %s\ndest 1: %s\n\n", s0, dest);
	free(dest);

	char *s1 = "bonjour";
	dest = ft_strtrim(s1, " *-");
	printf("set \" *-\"\tstr: %s \ndest 2: %s\n\n", s1, dest);
	free(dest);

	char *s2 = " *-*  b-o*n j -our **  ";
	dest = ft_strtrim(s2, "");
	printf("set \"\"\tstr: %s\ndest 3: %s\n\n", s2, dest);
	free(dest);

	char *s3 = " *-*  b-o*n j -our **  ";
	dest = ft_strtrim(s3, NULL);
	printf("set NULL\tstr: %s\ndest 4: %s\n\n", s3, dest);
	free(dest);

	char *s4 = " *-*  -*   **  ";
	dest = ft_strtrim(s4, " *-");
	printf("set \" *-\"\tstr: %s\ndest 5: %s\n\n", s4, dest);
	free(dest);

	dest = ft_strtrim(NULL, " *-");
	printf("set \" *-\"\tstr: NULL\ndest 6: %s\n\n", dest);
	free(dest);

	dest = ft_strtrim(NULL, NULL);
	printf("set NULL\tstr: NULL\ndest 7: %s\n\n", dest);
	free(dest);

	dest = ft_strtrim("", " *-");
	printf("set \" *-\"\tstr: \"\"\ndest 8: %s\n\n", dest);
	free(dest);
}
