/*32. Fa�a um algoritmo que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas.*/

//Chamada das bibliotecas
#include<conio.h>
#include<stdio.h>
#include<iostream>

//declara��o das vari�veis
float kilos, gramas;

//Escopo principal
main(){
	//entrada de dados
	system("cls"); //limpa tela
	printf("\n Digite quantos kilos pesa uma pessoa: ");
	scanf("%f", &kilos);


	//processamneto de dados
	gramas = (kilos*1000);
	
	//sa�da de dados = resultado
	printf("\n A quantidade de gramas que essa pessoa pesa eh: %.1f", gramas);


printf("\n\n");
system("Pause");

}
