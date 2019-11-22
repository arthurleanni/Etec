#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(void)
{
	char nome[100];
	int idade;
	printf("Digite o seu nome: \n");
	scanf("%s", &nome);
	printf("\n%s \n", nome);
	
	printf("Digite a sua idade: \n");
	scanf("%d", &idade);
	printf("\n%d \n", idade);
	system("pause"); 
	return 0;
}

