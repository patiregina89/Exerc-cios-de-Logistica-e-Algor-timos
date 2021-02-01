/*28. Faça um algoritmo que receba duas notas, calcule e mostre a média ponderada dessas notas,
considerando peso 2 para a primeira nota e peso 3 para a segunda nota.*/

//Chamada das bibliotecas
#include<conio.h>
#include<stdio.h>
#include<iostream>

//declaração das variáveis
float n1, n2, media;

//Escopo principal
main(){
	//entrada de dados
	system("cls"); //limpa tela
	printf("\n Digite a nota 1: ");
	scanf("%f", &n1);
	printf("\n Digite a nota 2: ");
	scanf("%f", &n2);


	//processamneto de dados
	media = ((n1*2) + (n2*3)) / 5;
	
	//saída de dados = resultado
	printf("\n N1: %.2f", n1);
	printf("\n N2: %.2f", n2);
	printf("\n A media ponderada eh de: %.2f", media);


printf("\n\n");
system("Pause");

}
