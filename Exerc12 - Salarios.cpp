/*12. Fa�a um algoritmo para ler o sal�rio de um funcion�rio e 
aument�-lo em 15%. Ap�s o aumento, desconte 8% de impostos. 
Imprima o sal�rio inicial, o sal�rio com o aumento e o sal�rio final.*/

//chamada das bibliotecas de comando
#include<conio.h>
#include<stdio.h>
#include<iostream>

//declarar as variaveis

char NomeFunc[30];
float SalIni,SalAumto,SalFinal; //Salario incial - Salario Aumento - Salario Final
float Imposto=0.92; //8% de imposto
float Aumento=1.15; //15% aumento

//inciar o escopo de probrama com a entrada de dados,processamento e saida de dados

main(){
	//entrada de dados
	system("cls"); //comando de limpa TELA  Clear Screen 
	printf("\n Digite o nome do funcionario:");//informa��o na tela para o usuario
	scanf("%s",&NomeFunc);//leitura do dado do teclado para a variavel
	printf("\n Digite o Salario Inicial:");//informa��o na tela para o usuario
	scanf("%f",&SalIni);////leitura do dado do teclado para a variavel
	
	//processamento
	SalAumto = SalIni * Aumento;
	SalFinal = SalAumto * Imposto;
	
	//saida de dados
	
	printf("\n Nome do funcionario: %s ",NomeFunc);
	printf("\n Salario Inicial: %.2f ",SalIni);
	printf("\n Salario Aumento: %.2f ",SalAumto);
	printf("\n Salario Final: %.2f ",SalFinal);
	
	printf("\n\n"); //n - new line 
	system("pause");//espera uma tecla para finalizar o programa
}

