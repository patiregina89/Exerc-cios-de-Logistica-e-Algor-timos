/*1. A imobili�ria Im�bilis vende apenas terrenos retangulares. Fa�a um algoritmo para ler as dimens�es de um terreno e depois exibir a �rea do terreno.*/

//Chamada das bibliotecas
#include<conio.h>
#include<stdio.h>
#include<iostream>

//declara��o das vari�veis
float largura, profundidade, areatotal;

//Escopo principal
main(){
	//entrada de dados
	system("cls"); //limpa tela
	printf("\n Informe a largura do terreno: ");
	scanf("%f", &largura);
	printf("\n Informe a profundidade do terreno: ");
	scanf("%f", &profundidade);


	//processamneto de dados
	areatotal = (largura * profundidade);
	
	//sa�da de dados = resultado
	printf("\n Area total do terreno informado e de %.2f m2.", areatotal);


	
printf("\n\n");
system("Pause");

}
