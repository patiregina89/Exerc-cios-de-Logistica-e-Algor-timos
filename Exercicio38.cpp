/*38. Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
a) a idade dessa pessoa em anos;
b) a idade dessa pessoa em meses;
c) a idade dessa pessoa em dias;
d) a idade dessa pessoa em semanas.
*/

//Chamada das bibliotecas
#include<conio.h>
#include<stdio.h>
#include<iostream>

//declaração das variáveis
float anonascimento, anohoje, idadeanos, idademeses, idadedias, idadesemanas;

//Escopo principal
main(){
	//entrada de dados
	system("cls"); //limpa tela
	printf("\n Informe seu ano de nascimento: ");
	scanf("%f", &anonascimento);
	printf("\n Digite o ano atual: ");
	scanf("%f", &anohoje);


	//processamneto de dados
	idadeanos = anohoje - anonascimento;
	idademeses = (anohoje - anonascimento)*12;
	idadedias = (anohoje - anonascimento)*365;
	idadesemanas = (anohoje - anonascimento)*52;

	
	//saída de dados = resultado
	printf("\n Você possui %.0f anos", idadeanos);
	printf("\n Você possui %.0f meses de idade (aproximadamente)", idademeses);
	printf("\n Você possui %.0f dias de idade (aproximadamente)", idadedias);
	printf("\n Você possui %.0f semanas de idade (aproximadamente)", idadesemanas);


printf("\n\n");
system("Pause");

}
