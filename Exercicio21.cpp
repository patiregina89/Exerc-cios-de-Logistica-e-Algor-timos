/*21. A f�brica de refrigerantes Meia-Cola vende seu produto em tr�s formatos:
lata de 350 ml, garrafa de 600 ml e garrafa de 2 litros.
Se um comerciante compra uma determinada quantidade de cada formato,
fa�a um algoritmo para calcular quantos litros de refrigerante ele comprou.*/

//Chamada das bibliotecas
#include<conio.h>
#include<stdio.h>
#include<iostream>

//declara��o das vari�veis
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
	
	//sa�da de dados = resultado
	printf("\n A quantidade de litros de refrigenrente comprados foi de: %d", lt);


printf("\n\n");
system("Pause");

}
