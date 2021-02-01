/*8. Faça um algoritmo para ler três notas de um aluno em uma disciplina e imprimir a sua 
média ponderada (as notas tem pesos respectivos de 1, 2 e 3).*/

//Chamada das bibliotecas
#include<conio.h>
#include<stdio.h>
#include<iostream>

//declaração das variáveis
char Aluno[30];
char Disciplina[50];
float N1, N2, N3, media;

//Escopo principal
main(){
	//entrada de dados
	system("cls"); //limpa tela
	printf("\n Digite o nome do aluno: ");
	scanf("%s", &Aluno);
	printf("\n Digite o nome da disciplina: ");
	scanf("%s", &Disciplina);
	printf("\n Digite a N1: ");
	scanf("%f", &N1);
	printf("\n Digite a N2: ");
	scanf("%f", &N2);
	printf("\n Digite a N3: ");
	scanf("%f", &N3);

	//processamneto de dados
	media = ((N1*1) + (N2*2) + (N3*3))/6;
	
	//saída de dados = resultado
	printf("\n O nome do aluno: %s", Aluno);
	printf("\n Disciplina: %s", Disciplina);
	printf("\n N1: %.2f", N1);
	printf("\n N2: %.2f", N2);
	printf("\n N3: %.2f", N3);
	printf("\n A media e: %.2f", media);
	
	if(media >= 7.0){
		printf("\n Aluno APROVADO");
	}

	if(media < 4.0){
		printf("\n Aluno REPROVADO");
	}
	
	if((media >= 4.0) && (media <= 6.9)){
		printf("\n Aluno em RECUPERAÇÃO");
	}

printf("\n\n");
system("Pause");

}
