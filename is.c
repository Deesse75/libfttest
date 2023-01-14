#include "mes_main.h"

void	main_is(void)
{
	char	str1[] = "akdDR61e8;?ç@\a*\a ";
	char	str2[] = "akdDR61e8;?ç@\a*\a ";
	int	i;
	int	a;
	int	b;
	
	i = -1;
	printf("\nft_isalpha\n");
	while (str1[++i])
	{
		a = ft_isalpha(str1[i]);
		b = isalpha(str1[i]);
		printf("%c\t%d\t%d\n", str1[i],  a, b);
	}
	i = -1;
	printf("\nft_isalnum\n");
	while (str1[++i])
	{
		a = ft_isalnum(str1[i]);
		b = isalnum(str1[i]);
		printf("%c\t%d\t%d\n", str1[i],  a, b);
	}
	i = -1;
	printf("\nft_isascii\n");
	while (str1[++i])
	{
		a = ft_isascii(str1[i]);
		b = isascii(str1[i]);
		printf("%c\t%d\t%d\n", str1[i],  a, b);
	}
	i = -1;
	printf("\nft_isdigit\n");
	while (str1[++i])
	{
		a = ft_isdigit(str1[i]);
		b = isdigit(str1[i]);
		printf("%c\t%d\t%d\n", str1[i],  a, b);
	}
	i = -1;
	printf("\nft_isprint\n");
	while (str1[++i])
	{
		a = ft_isprint(str1[i]);
		b = isprint(str1[i]);
		printf("%c\t%d\t%d\n", str1[i],  a, b);
	}

	i = -1;
	printf("\nft_toupper\n");
	while (str1[++i])
	{
		a = ft_toupper(str1[i]);
		b = toupper(str2[i]);
		printf("%c\t%d\t%d\n", str1[i],  a, b);
	}
	i = -1;
	printf("\nft_tolower\n");
	while (str1[++i])
	{
		a = ft_tolower(str1[i]);
		b = tolower(str2[i]);
		printf("%c\t%d\t%d\n", str1[i],  a, b);
	}
}
