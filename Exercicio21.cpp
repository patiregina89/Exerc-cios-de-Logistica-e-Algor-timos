/*21. A fábrica de refrigerantes Meia-Cola vende seu produto em três formatos:
lata de 350 ml, garrafa de 600 ml e garrafa de 2 litros.
Se um comerciante compra uma determinada quantidade de cada formato,
faça um algoritmo para calcular quantos litros de refrigerante ele comprou.*/

//Chamada das bibliotecas
#include<conio.h>
#include<stdio.h>
#include<iostream>

//declaração das variáveis
int lata, gMedia, gGrande, lt;

//Escopo principal
main(){
	//entrada de dados
	system("cls"); //limpa tela
	printf("\n Informe a quantidade de lata compradas: ");
	scanf("%d", &lata);
	printf("\n Informe a quantidade de garrafas de 600ml compradas: ");
	scanf("%d", &gMedia);
	printf("\n Informe a quantidade de garrafas de 2L compradas: ");
	scanf("%d", &gGrande);


	//processamneto de dados
	lt = ((lata*350) + (gMedia*600) + (gGrande*2000)) /100;
	
	//saída de dados = resultado
	printf("\n A quantidade de litros de refrigenrente comprados foi de: %d", lt);


printf("\n\n");
system("Pause");

}
