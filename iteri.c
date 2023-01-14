#include "mes_main.h"

static void	my_function(unsigned int n, char *str)
{
	int i = -1;
	int j = 0;
	while (str[++i])
	{
		j = -1;
		while (++j <= n)
			printf("%c", str[i]);
		//printf("\n");
	}
}

void	main_iteri(void)
{
	void (*f)(unsigned int, char*);

	f = &my_function;

	printf("\nft_iteri\n");
	printf("attendu : \nbonjouroonnjjoouurrnnnjjjooouuurrrjjjjoooouuuurrrrooooouuuuurrrrruuuuuurrrrrrrrrrrrr");
	printf("rendu   :\n");
	ft_striteri("bonjour", (*f));
	printf("\n");
}
