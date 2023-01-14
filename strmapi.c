#include "mes_main.h"

static char	doublon(unsigned int n, char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	else if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

void	main_strmapi(void)
{
	char *dest;
	char (*f)(unsigned int, char);

	printf("\nft_strmapi\nInverse majuscule minuscule\n");
	f = &doublon;
	char *s1 = "bonjour";
	dest = ft_strmapi("bonjour", (*f));
	printf("str: %s -> dest: %s\n", s1, dest);
	char *s2 = "CoMMenTaiRE";
	dest = ft_strmapi("CoMMenTaiRE", (*f));
	printf("str: %s -> dest: %s\n", s2, dest);
	char *s3 = "AAAbon123jourXXX";
	dest = ft_strmapi("AAAbon123jourXXX", (*f));
	printf("str: %s -> dest: %s\n", s3, dest);
	char *s4 = "";
	dest = ft_strmapi("", (*f));
	printf("str: %s -> dest: %s\n", s4, dest);
}
