/*12. Fa�a um algoritmo para ler o sal�rio de um funcion�rio e aument�-lo em 15%. Ap�s o aumento, desconte 8% de impostos.
Imprima o sal�rio inicial, o sal�rio com o aumento e o sal�rio final.*/

//Chamada das bibliotecas
#include<conio.h>
#include<stdio.h>
#include<iostream>

//declara��o das vari�veis
float salario, salarioaumento, salarioliquido;
float aumento = 1.15;
float impostos = 0.08; 

//Escopo principal
main(){
	//entrada de dados
	system("cls"); //limpa tela
	printf("\n Informe o salario atual do funcionario R$ ");
	scanf("%f", &salario);

	//processamneto de dados
	salarioaumento = salario*aumento;
	salarioliquido = salarioaumento - (salario*impostos);
	
	//sa�da de dados = resultado
	printf("\n O salario inicial do funcionario era R$ %.2f", salario);
	printf("\n Com o aumento, o salario bruto passou a ser R$ %.2f", salarioaumento);
	printf("\n Descontados os impostos, o funcionario recebe o salario liquido de R$ %.2f", salarioliquido);
	

printf("\n\n");
system("Pause");
}
