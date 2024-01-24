#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("CADETE PLANNER 42\nSELECIONE QUAL A SUA FASE: \n1 - ENTRANDO EM ORBITA\n2 - AMPLIANDO HORIZONTES\n3 - EXPLORANDO O ESPAÇO\n\n");
	int num;
	scanf("%d", &num);
	system("clear");
	printf("SELECIONE O SEU PROJETO ATUAL:\n\n");
	if (num == 1)
		printf("1 - LIBFT\n2 - GET_NEXT_LINE\n3 - FT_PRINTF\n4 - BORN2BEROOT\n5 - SO_LONG/FDF/FRACTAL\n6 - PIPEX\n\n");
	if (num == 2)
		printf("7 - PUSH_SWAP\n8 - MINISHELL\n9 - PHILOSOPHERS\n10 - NETPRACTICE\n11 - CUBE3D/MINIRT\n\n");
	if (num == 3)
		printf("12 - CPP\n13 - INCEPTION\n14 - WEBSERV/FT_IRC\n15 - TRANCENDENCE\n\n");

	scanf("%d", &num);
	system("clear");
	float sum = 0;
	int arr[15] = {70, 70, 70, 40, 60, 50, 60, 210, 70, 50, 280, 210, 210, 175, 245};

	for(int i=(num - 1); i < 15; i++)
		sum += arr[i];

	printf("TEMPO TOTAL PARA TERMINAR O CURSO: %.1f HORAS\n", sum);
	printf("SE VOCE DEDICAR 3 HORAS POR DIA, VAI TERMINAR O CURSO EM %.1f DIAS OU %.1f MESES\n", (sum/3), (sum/3)/30);
	printf("SE VOCE DEDICAR 6 HORAS POR DIA, VAI TERMINAR O CURSO EM %.1f DIAS OU %.1f MESES\n", (sum/6), (sum/6)/30);
	printf("SE VOCE DEDICAR 8 HORAS POR DIA, VAI TERMINAR O CURSO EM %.1f DIAS OU %.1f MESES\n", (sum/8), (sum/8)/30);
	printf("SE VOCE DEDICAR 10 HORAS POR DIA, VAI TERMINAR O CURSO EM %.1f DIAS OU %.1f MESES\n", (sum/10), (sum/10)/30);

}
