#include "mes_main.h"

void	main_split(void)
{
	int i;
	char **strs;

	printf("\nft_split\n");
	strs = ft_split("*****bonjour*comment*va**", '*');
	printf("str: \"*****bonjour*comment*va**\" set: *\n");
	i = -1;
	while (strs[++i])
	{
		printf("1: %s\n", strs[i]);
		free(strs[i]);
	}
	printf("1: %s\n", strs[i]);
	free(strs[i]);
	free(strs);

	strs = ft_split("***************", '*');
	printf("str: \"***************\" set: *\n");
	i = -1;
	while (strs[++i])
	{
		printf("2: %s\n", strs[i]);
		free(strs[i]);
	}
	printf("2: %s\n", strs[i]);
	free(strs[i]);
	free(strs);

	strs = ft_split("b**o***n***j*******o***u**r", '*');
	printf("str: \"b**o***n***j*******o***u**r\" set: *\n");
	i = -1;
	while (strs[++i])
	{
		printf("3: %s\n", strs[i]);
		free(strs[i]);
	}
	printf("3: %s\n", strs[i]);
	free(strs[i]);
	free(strs);

	strs = ft_split("", '*');
	printf("str: \"\" set: -\n");
	i = -1;
	while (strs[++i])
	{
		printf("4: %s\n", strs[i]);
		free(strs[i]);
	}
	printf("4: %s\n", strs[i]);
	free(strs[i]);
	free(strs);

	strs = ft_split("bon**jour**", '-');
	printf("str: \"bon**jour**\" set: -\n");
	i = -1;
	while (strs[++i])
	{
		printf("6: %s\n", strs[i]);
		free(strs[i]);
	}
	printf("6: %s\n", strs[i]);
	free(strs[i]);
	free(strs);
}
