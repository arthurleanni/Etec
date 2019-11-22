#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main()
{
	
	float media,nota1,nota2,nota3;
	
	
	printf("Digite a nota 1: ");
	scanf("%f", &nota1);
	printf("Digite a nota 2: ");
	scanf("%f", &nota2);
	printf("Digite a nota 3: ");
	scanf("%f", &nota3);
	
		media = (nota1+nota2+nota3)/3;

	
	printf("a media aritmetica e: %.0f ", media);
	
	
	system("pause");
	return 0; 
}
