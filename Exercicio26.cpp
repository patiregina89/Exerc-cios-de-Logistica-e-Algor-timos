/*26. Faça um algoritmo que receba três números, calcule e mostre a multiplicação desses números.*/

//Chamada das bibliotecas
#include<conio.h>
#include<stdio.h>
#include<iostream>

//declaração das variáveis
int n1, n2, n3, multiplicacao;

//Escopo principal
main(){
	//entrada de dados
	system("cls"); //limpa tela
	printf("\n Digite um numero: ");
	scanf("%d", &n1);
	printf("\n Digite outro numero: ");
	scanf("%d", &n2);
	printf("\n Digite outro numero: ");
	scanf("%d", &n3);


	//processamneto de dados
	multiplicacao = (n1 * n2 * n3);
	
	//saída de dados = resultado
	printf("\n %d x ", n1 );
	printf("%d x ", n2 );
	printf("%d = ", n3 );
	printf("%d", multiplicacao);


printf("\n\n");
system("Pause");

}
