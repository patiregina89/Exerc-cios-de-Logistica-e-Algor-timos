/*17. Alguns pa�ses medem temperaturas em graus Celsius, e outros em graus Fahrenheit.
Fa�a um algoritmo para ler uma temperatura Celsius e imprimi-la em Fahrenheit (pesquise como fazer este tipo de convers�o).*/

//Chamada das bibliotecas
#include<conio.h>
#include<stdio.h>
#include<iostream>

//declara��o das vari�veis
float tC, tF;

//Escopo principal
main(){
	//entrada de dados
	system("cls"); //limpa tela
	printf("\n Informe a temperatura em graus Celsius: ");
	scanf("%f", &tC);

	//processamneto de dados
	tF = (tC * 1.8) + 32;
	
	//sa�da de dados = resultado
	printf("\n %.1f", tC);
	printf(" Graus Celsius equivale a %.1f", tF);
	printf(" Graus Fahrenheit");


printf("\n\n");
system("Pause");
}
