/*17. Alguns países medem temperaturas em graus Celsius, e outros em graus Fahrenheit.
Faça um algoritmo para ler uma temperatura Celsius e imprimi-la em Fahrenheit (pesquise como fazer este tipo de conversão).*/

//Chamada das bibliotecas
#include<conio.h>
#include<stdio.h>
#include<iostream>

//declaração das variáveis
float tC, tF;

//Escopo principal
main(){
	//entrada de dados
	system("cls"); //limpa tela
	printf("\n Informe a temperatura em graus Celsius: ");
	scanf("%f", &tC);

	//processamneto de dados
	tF = (tC * 1.8) + 32;
	
	//saída de dados = resultado
	printf("\n %.1f", tC);
	printf(" Graus Celsius equivale a %.1f", tF);
	printf(" Graus Fahrenheit");


printf("\n\n");
system("Pause");
}
