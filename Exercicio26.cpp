/*26. Fa�a um algoritmo que receba tr�s n�meros, calcule e mostre a multiplica��o desses n�meros.*/

//Chamada das bibliotecas
#include<conio.h>
#include<stdio.h>
#include<iostream>

//declara��o das vari�veis
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
	
	//sa�da de dados = resultado
	printf("\n %d x ", n1 );
	printf("%d x ", n2 );
	printf("%d = ", n3 );
	printf("%d", multiplicacao);


printf("\n\n");
system("Pause");

}
