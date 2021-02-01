/*1. A imobiliária Imóbilis vende apenas terrenos retangulares. Faça um algoritmo para ler as dimensões de um terreno e depois exibir a área do terreno.*/

//Chamada das bibliotecas
#include<conio.h>
#include<stdio.h>
#include<iostream>

//declaração das variáveis
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
	
	//saída de dados = resultado
	printf("\n Area total do terreno informado e de %.2f m2.", areatotal);


	
printf("\n\n");
system("Pause");

}
