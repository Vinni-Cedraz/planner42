#include <stdio.h>

int main()
{
	printf("CADETE PLANNER 42\nSELECIONE QUAL A SUA FASE: \n1 - ENTRANDO EM ORBITA\n2 - AMPLIANDO HORIZONTES\n3 - EXPLORANDO O ESPAÇO\n\n");
	int num;
	scanf("%d", &num);
	if (num == 1)
		printf("1 - LIBFT\n2 - GET_NEXT_LINE\n3 - FT_PRINTF\n4 - BORN2BEROOT\n5 - SO_LONG/FDF/FRACTAL\n6 - PIPEX\n\n");
	if (num == 2)
		printf("7 - PUSH_SWAP\n8 - MINISHELL\n9 - PHILOSOPHERS\n10 - NETPRACTICE\n11 - CUBE3D/MINIRT\n\n");
	if (num == 3)
		printf("12 - CPP\n13 - INCEPTION\n14 - WEBSERV/FT_IRC\n15 - TRANCENDENCE\n\n");

	scanf("%d", &num);

}

