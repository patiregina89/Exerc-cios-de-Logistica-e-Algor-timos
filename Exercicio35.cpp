/*35. Fa�a um algoritmo que calcule e mostre a �rea de um losango. Sabe-se que: A = (diagonal_maior * diagonal_menor)/2;*/

//Chamada das bibliotecas
#include<conio.h>
#include<stdio.h>
#include<iostream>

//declara��o das vari�veis
float diagonalMaior, diagonalMenor, areaTotal;

//Escopo principal
main(){
	//entrada de dados
	system("cls"); //limpa tela
	printf("\n Informe o tamanho da diagonal maior do losango: ");
	scanf("%f", &diagonalMaior );
	printf("\n Informe o tamanho da diagonal menor do losango: ");
	scanf("%f", &diagonalMenor);

	//processamneto de dados
	areaTotal = (diagonalMaior * diagonalMenor) / 2;
	
	//sa�da de dados = resultado
	printf("\n A area do losango eh: \n (%.2f * %.2f) / 2 = %.2f", diagonalMaior, diagonalMenor, areaTotal);

printf("\n\n");
system("Pause");

}
