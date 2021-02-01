/*12. Faça um algoritmo para ler o salário de um funcionário e aumentá-lo em 15%. Após o aumento, desconte 8% de impostos.
Imprima o salário inicial, o salário com o aumento e o salário final.*/

//Chamada das bibliotecas
#include<conio.h>
#include<stdio.h>
#include<iostream>

//declaração das variáveis
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
	
	//saída de dados = resultado
	printf("\n O salario inicial do funcionario era R$ %.2f", salario);
	printf("\n Com o aumento, o salario bruto passou a ser R$ %.2f", salarioaumento);
	printf("\n Descontados os impostos, o funcionario recebe o salario liquido de R$ %.2f", salarioliquido);
	

printf("\n\n");
system("Pause");
}
