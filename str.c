#include "mes_main.h"

void	main_str(void)
{
	int	a, b;

	printf("\nft_strlen\n");
	a = (int)ft_strlen("Le jour avant demain");
	b = (int)strlen("Le jour avant demain");
	printf("%s\t%d\t%d\n", "Le jour avant demain", a, b);
	a = (int)ft_strlen("");
	b = (int)strlen("");
	printf("%s\t%d\t%d\n", "vide:\t\t", a, b);
	printf("\n");

	char s1[] = "0123456789";
	char d1[] = "associations";
	char s2[] = "0123456789";
	char d2[] = "associations";
	a = ft_strlcpy(d1, s1, 5);
	b = strlcpy(d2, s2, 5);
	printf("ft_strlcpy:\t%d %s\n", a, d1);
	printf("strlcpy   :\t%d %s\n", b, d2);
	printf("\n");
	a = ft_strlcpy(d1, s1, 15);
	b = strlcpy(d2, s2, 15);
	printf("ft_strlcpy:\t%d %s\n", a, d1);
	printf("strlcpy   :\t%d %s\n", b, d2);
	printf("\n");
	char u1[] = "";
	char u2[] = "";
	a = ft_strlcpy(u1, "", 15);
	b = strlcpy(u2, "", 15);
	printf("ft_strlcpy:\t%d %s\n", a, u1);
	printf("strlcpy   :\t%d %s\n", b, u2);

	printf("\n");
	char s3[11] = "0123456789";
	char d3[50] = "associations";
	char s4[11] = "0123456789";
	char d4[50] = "associations";
	a = ft_strlcat(d3, s3, 20);
	b = strlcat(d4, s4, 20);
	printf("ft_strlcat:\t%d\t%s\n", a, d3);
	printf("strlcat   :\t%d\t%s\n", b, d4);
	a = ft_strlcat(d3, s3, 40);
	b = strlcat(d4, s4, 40);
	printf("\n");
	printf("ft_strlcat:\t%d\t%s\n", a, d3);
	printf("strlcat   :\t%d\t%s\n", b, d4);
	printf("\n");
	char t1[50] = "";
	char t2[50] = "";
	a = ft_strlcat(t1, s3, 40);
	b = strlcat(t2, s4, 40);
	printf("ft_strlcat:\t%d\t%s\n", a, t1);
	printf("strlcat   :\t%d\t%s\n", b, t2);


	printf("\n");
	printf("ft_strchr:\t%s\n", ft_strchr("humain", 'm'));
	printf("strchr   :\t%s\n", strchr("Humain", 'm'));
	printf("\n");
	printf("ft_strchr:\t%s\n", ft_strchr("sapeur pompier", 'y'));
	printf("strchr   :\t%s\n", strchr("Sapeur pompier", 'y'));
	printf("\n");
	printf("ft_strchr:\t%s\n", ft_strchr("caramel", 'a'));
	printf("strchr   :\t%s\n", strchr("caramel", 'a'));


	printf("\n");
	printf("\nft_strrchr: -------------> %s\n", ft_strrchr("vaporisation", a));
	printf("strrchr:    -------------> %s\n", strrchr("vaporisation", a));
	printf("\n");
	printf("ft_strrchr: -------------> %s\n", ft_strrchr("caramel", 'a'));
	printf("strrchr:    -------------> %s\n", strrchr("caramel", 'a'));

	printf("\nstrncmp\n");
	printf("bonjour <-> ca va\t%d  %d\n", ft_strncmp("bonjour", "ca va", 5), ft_strncmp("bonjour", "ca va", 5));
	printf("\"vide\" <-> ca va\t%d  %d\n", ft_strncmp("", "ca va", 5), ft_strncmp("", "ca va", 5));
	printf("bonjour <-> \"vide\"\t%d  %d\n", ft_strncmp("bonjour", "", 5), ft_strncmp("bonjour", "", 5));
	printf("bonjour <-> bonjour\t%d  %d\n", ft_strncmp("bonjour", "bonjour", 5), ft_strncmp("bonjour", "bonjour", 5));
	printf("\"vide\" <-> \"vide\"\t%d  %d\n", ft_strncmp("", "", 5), ft_strncmp("", "", 5));

	printf("\nft_strnstr\n");
	printf("ft_strnstr: %s strnstr: %s\n", ft_strnstr("marathonien", "thon", 4), strnstr("marathonien", "thon", 4));
	printf("ft_strnstr: %s strnstr: %s\n", ft_strnstr("marathonien", "thon", 11), strnstr("marathonien", "thon", 11));
	printf("ft_strnstr: %s strnstr: %s\n", ft_strnstr("marathorien", "thon", 11), strnstr("marathorien", "thon", 11));
	printf("ft_strnstr: %s strnstr: %s\n", ft_strnstr("", "thon", 11), strnstr("", "thon", 11));
	printf("ft_strnstr: %s strnstr: %s\n", ft_strnstr("marathorien", "", 11), strnstr("marathorien", "", 11));
	printf("ft_strnstr: %s strnstr: %s\n", ft_strnstr("", "", 11), strnstr("", "", 11));
	printf("ft_strnstr: %s strnstr: %s\n", ft_strnstr("marathorien", "thon", 11), strnstr("marathorien", "thon", 11));
}
