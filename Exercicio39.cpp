/*39. Jo�o recebeu seu sal�rio de R$ 1200,00 e precisa pagar duas contas(C1=R$ 200,00 e C2=R$120,00) que est�o atrasadas.
Como as contas est�o atrasadas, Jo�o ter� de pagar multa de 2% sobre cada conta. Fa�a um algoritmo que calcule e mostre quanto restar� do sal�rio do Jo�o;*/

//Chamada das bibliotecas
#include<conio.h>
#include<stdio.h>
#include<iostream>

//declara��o das vari�veis
float salario = 1200;
float c1 = 200;
float c2 = 120;
float salariofinal;

//Escopo principal
main(){
	//processamneto de dados
	salariofinal = salario - ((c1 + c2) * 1.02);
	
	//sa�da de dados = resultado
	printf("\n Apos pagar as contas atrasadas e multas, restara do salario de Joao o valor de R$ %.2f", salariofinal);

printf("\n\n");
system("Pause");

}
