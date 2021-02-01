/*40. Faça um algoritmo que receba o valor dos catetos de um triângulo, calcule e mostre o valor da hipotenusa.*/

//Chamada das bibliotecas
#include<iostream>
#include<stdio.h>
#include<math.h>

//declaração das variáveis
float co, ca, hipo;
	

//Escopo principal
main(){

	//entrada de dados
	printf("Digite o primeiro cateto: ");
	scanf("%f", &co);
	printf("Digite o segundo cateto: ");
	scanf("%f", &ca);

	//processamneto de dados
	hipo = sqrt((co*co) + (ca*ca));
	
	//saída de dados = resultado
	printf("O cateto oposto %.1f", co);
	printf(" + o cateto adjacente: %.1f", ca);
	printf(" e igual a hipotenusa: %.1f", hipo);
	
printf("\n\n");
system("Pause");
}

