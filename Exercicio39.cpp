/*39. João recebeu seu salário de R$ 1200,00 e precisa pagar duas contas(C1=R$ 200,00 e C2=R$120,00) que estão atrasadas.
Como as contas estão atrasadas, João terá de pagar multa de 2% sobre cada conta. Faça um algoritmo que calcule e mostre quanto restará do salário do João;*/

//Chamada das bibliotecas
#include<conio.h>
#include<stdio.h>
#include<iostream>

//declaração das variáveis
float salario = 1200;
float c1 = 200;
float c2 = 120;
float salariofinal;

//Escopo principal
main(){
	//processamneto de dados
	salariofinal = salario - ((c1 + c2) * 1.02);
	
	//saída de dados = resultado
	printf("\n Apos pagar as contas atrasadas e multas, restara do salario de Joao o valor de R$ %.2f", salariofinal);

printf("\n\n");
system("Pause");

}
