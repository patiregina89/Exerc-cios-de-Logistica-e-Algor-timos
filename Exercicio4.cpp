/*Escreva um algoritmo para ler o nome e a idade de uma pessoa, e exibir quantos dias de vida ela possui. 
Considere sempre anos completos, e que um ano possui 365 dias. 
Ex: uma pessoa com 19 anos possui 6935 dias de vida; veja um exemplo de saída:
MARIA, VOCÊ JÁ VIVEU 6935 DIAS 5.*/

//Chamada das bibliotecas
#include<conio.h>
#include<stdio.h>
#include<iostream>

//declaração das variáveis
char nome[30];
float idade, diasvida;

//Escopo principal
main(){
	//entrada de dados
	system("cls"); //limpa tela
	printf("\n Informe seu nome: ");
	scanf("%s", &nome);
	printf("\n Informe sua idade : ");
	scanf("%f", &idade);


	//processamneto de dados
	diasvida = (idade * 365);
	
	//saída de dados = resultado
	printf("\n %s, ", nome);
	printf("voce ja viveu %.0f, ", diasvida);
	printf("dias!");

	
printf("\n\n");
system("Pause");

}
